#include <stdio.h>
#include <string.h> // kurac picka sisa dinamo

int main(void) {

   struct pred_s {
      int sifPred;
      char nazPred[40 + 1];
      int brStud;
   } predmet;

   int trazenaSifra, sifraStud, ocjena, sifPred;
   char ime[20 + 1], prez[20 + 1];

   printf("Upisite sifru > ");
   scanf("%d", &trazenaSifra);

   FILE *ulazOcjene = fopen("ocjene", "r");
   FILE *ulazPredmeti = fopen("predmeti2.bin", "rb");

   _Bool pronadeno = 0;

   while (fscanf(ulazOcjene, "%d %s %s %d %d", &sifraStud, ime, prez, &sifPred,
                 &ocjena) == 5) {
      if (sifraStud == trazenaSifra) {
         if (pronadeno == 0) {
            printf("%s %s je polozio/polozila:\n", ime, prez);
            pronadeno = 1;
         }

         fseek(ulazPredmeti, (long)(sifPred - 1000 - 1) * sizeof(predmet),
               SEEK_SET);
         fread(&predmet, sizeof(predmet), 1, ulazPredmeti);

         if (predmet.sifPred == 0) {
            strcpy(predmet.nazPred, "?");
         }
         printf("%s (%d)\n", predmet.nazPred, ocjena);
      }

      if (!pronadeno) {
         printf("Nema polozenih predmeta\n");
      }
   }

   fclose(ulazOcjene);
   fclose(ulazPredmeti);

   return 0;
}