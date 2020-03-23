#include <stdio.h>
#include <string.h>

int main(void) {
   FILE *ulaz = fopen("izlaz.bin", "rb");

   long mBr;
   char prezime[15 + 1];

   while (fread(&mBr, sizeof(mBr), 1, ulaz) &&
          fread(prezime, sizeof(prezime), 1, ulaz)) {
      if (strchr(prezime, 'a') != 0) {
         printf("%ld %s\n", &mBr, prezime);
      }
   }

   fclose(ulaz);

   return 0;
}