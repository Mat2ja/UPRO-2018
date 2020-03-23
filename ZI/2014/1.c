#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
   struct artikli_s {
      int sifra;
      char naziv[50 + 1];
      float cijena;
      int kolicina;
      int kategorija;
   } artikl;

   FILE *fbin = fopen("skladiste.bin", "r+b");
   FILE *fout = fopen("report.txt", "w");

   float vrijednost[2] = {0., 0.}; // za M i V kategoriju
   float najskuplji[2] = {0., 0.}; // bolje -1.0 jer realno mogu sve bit 0kn
   int i = 0;
   int indexNajskupljeg[2] = {0};

   // slijedni prolaz binarnom datotekom i statistika
   while (fread(&artikl, sizeof(artikl), 1, fbin)) {
      vrijednost[artikl.kategorija] += artikl.cijena * artikl.kolicina;
      if (artikl.cijena > najskuplji[artikl.kategorija]) {
         najskuplji[artikl.kategorija] = artikl.cijena;
         indexNajskupljeg[artikl.kategorija] = artikl.sifra;
      }
   }

   // ispis u report.txt
   fprintf(fout, "# | Kategorija                     |  Vrijednost |\n");
   fprintf(fout, "--+--------------------------------+-------------+\n");
   fprintf(fout, "0 | Mali predmeti                  | %11.2f |\n",
           vrijednost[0]);
   fprintf(fout, "1 | Veliki predmeti                | %11.2f |\n",
           vrijednost[1]);
   fclose(fout);

   // izmjena binarne datoteke
   for (i = 0; i < 2; i++) {
      if (najskuplji[i] != 0.) {
         fseek(fbin, (long)(indexNajskupljeg[i] - 1) * sizeof(artikl),
               SEEK_SET);
         fread(&artikl, sizeof(artikl), 1, fbin); // ili sizeof(struct artili_s)
         artikl.cijena = 0.9 * artikl.cijena;
         fseek(fbin, -1L * sizeof(artikl), SEEK_CUR);
         fwrite(&artikl, sizeof(artikl), 1, fbin);
      }
   }
   fclose(fbin);
   fclose(fout);

   return 0;
}