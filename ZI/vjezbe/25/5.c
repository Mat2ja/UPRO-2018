#include <stdio.h>

int main(void) {
   FILE *izTok = fopen("slova.bin", "wb");

   char c;

   for (c = 'A'; c <= 'Z'; ++c) {
      fwrite(&c, sizeof(c), 1, izTok);
   }

   for (c = 'a'; c <= 'z'; ++c) {
      fwrite(&c, sizeof(c), 1, izTok);
   }

   fclose(izTok);

   return 0;
}
