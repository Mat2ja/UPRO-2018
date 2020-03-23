#include <stdio.h>

int main(void) {
   FILE *ulTok = fopen("osoba.bin", "r+b");

   struct osoba_s {
      int sif;
      char prez[20 + 1];
      float koef;
   } osPrvi, osTren, osZadnji;

   int brojac = 0;
   float suma = 0.f;

   while (fread(&osTren, sizeof(osTren), 1, ulTok) == 1) {
      ++brojac;
      suma += osTren.koef;
      if (brojac == 1) {
         osZadnji = osPrvi = osTren;
      } else if (strcmp(osTren.prez, osPrvi.prez) == 0) {
         osZadnji = osTren;
      }
   }
   if (brojac == 0) {
      printf("Nema zapisa.");
   } else {
      osZadnji.koef = suma / brojac;
      fseek(ulTok, sizeof(struct osoba_s) * (osZadnji.sif - 1), SEEK_SET);
      fwrite(&osZadnji, sizeof(struct osoba_s), 1, ulTok);
      printf("Postavljen rbr. %d.\n", osZadnji.sif);
   }

   fclose(ulTok);

   return 0;
}