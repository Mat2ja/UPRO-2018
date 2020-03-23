#include <stdio.h>

int main(void) {
   FILE *ulaz = fopen("ulaz.txt", "r");
   FILE *izlaz = fopen("izlaz.bin", "wb");

   long int mBr;
   char prezime[15 + 1];

   while (fscanf(ulaz, "%ld %s", &mBr, prezime) == 2) {
      fwrite(&mBr, sizeof(mBr), 1, izlaz);
      fwrite(prezime, sizeof(prezime), 1, izlaz);
   }

   fclose(ulTok);
   fclose(izTok);

   return 0;
}