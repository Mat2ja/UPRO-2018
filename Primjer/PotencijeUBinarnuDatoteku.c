#include <stdio.h>
#include <stdlib.h>
int main(void) {
   FILE *fo;
   unsigned int n, pot = 1;
   fo = fopen("potencije.bin", "wb");
   for (n = 0; n <= 31; n++) {
      fwrite(&n, sizeof(n), 1, fo);
      fwrite(&pot, sizeof(n), 1, fo);
      pot *= 2;
   }
   fclose(fo);
   return EXIT_SUCCESS;   
}