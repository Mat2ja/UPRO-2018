#include <stdio.h>
#include <stdlib.h>
int main(void) {
   FILE *fo;
   unsigned int i, pot = 1;
   fo = fopen("potencije.txt", "w");
   fprintf(fo, " n      2^n\n");
   fprintf(fo, "-------------\n");
   for (i = 0; i <= 31; i++) {
      fprintf(fo, "%2d%11u\n", i, pot);
      pot *= 2;
   }
   fclose(fo);
   return EXIT_SUCCESS;   
}