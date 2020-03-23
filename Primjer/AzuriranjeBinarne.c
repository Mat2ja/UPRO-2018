#include <stdio.h>
#include <stdlib.h>
#define MAX 16
int main(void) {
   FILE *fo;
   struct osoba {
      int sifra;
      char ime[MAX];
      char prezime[MAX];
      int tezina;
   } o;     
   int sifra, tezina;
   fo = fopen("osobe.bin", "r+b");
   while (1) {
      scanf("%d %d", &sifra, &tezina);
      if (sifra <= 0) break;
      fseek(fo, (sifra-1L) * sizeof(o), SEEK_SET);
      if (fread(&o, sizeof(o), 1, fo) == 1 && o.sifra == sifra) {
         o.tezina = tezina;
         fseek(fo, (sifra-1L) * sizeof(o), SEEK_SET);
         fwrite(&o, sizeof(o), 1, fo);
         printf("Ažurirani podaci za osobu %s %s\n", o.ime, o.prezime);
      } else {
         printf("Ne postoji osoba sa šifrom %d\n", sifra);
      }
   }
   fclose(fo);
   return EXIT_SUCCESS;   
}