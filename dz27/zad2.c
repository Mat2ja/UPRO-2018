#include <stdio.h>

int main(void) {
   char jmbag[10 + 1], ime[20 + 1], prez[20 + 1];
   float brBod;
   static float suma;
   static int brojac;

   FILE *ulTok = fopen("bodovi.txt", "r");

   while (fscanf(ulTok, "%s %s %s %f", jmbag, ime, prez, &brBod) == 4) {
      suma += brBod;
      ++brojac;
   }
   float prosjek = suma / brojac;

   fseek(ulTok, 0L, SEEK_SET);
   while (fscanf(ulTok, "%s %s %s %f", jmbag, ime, prez, &brBod) == 4) {
      if (brBod > prosjek) {
         printf("%s %s %s %.1f\n", jmbag, ime, prez, brBod);
      }
   }

   fclose(ulTok);

   return 0;
}