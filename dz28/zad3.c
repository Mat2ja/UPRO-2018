#include <stdio.h>

int main(void) {
   FILE *izTok = fopen("slova.bin", "wb");

   for (char c = 'A'; c <= 'Z'; ++c) {
      fwrite(&c, sizeof(c), 1, izTok);
   }

   for (char c = 'a'; c <= 'z'; ++c) {
      fwrite(&c, sizeof(c), 1, izTok);
   }

   for (char c = '0'; c <= '9'; ++c) {
      fwrite(&c, sizeof(c), 1, izTok);
   }

   fclose(izTok);

   return 0;
}