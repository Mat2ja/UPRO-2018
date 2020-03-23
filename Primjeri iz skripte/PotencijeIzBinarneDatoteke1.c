#include <stdio.h>
#include <stdlib.h>
int main(void) {
   FILE *fi;
   unsigned int n, pot;
   fi = fopen("potencije.bin", "rb");
   if (fi == NULL) {
      perror("Nije uspjelo otvaranje datoteke potencije.bin");
      return EXIT_FAILURE;
   }
   while (fread(&n, sizeof(n), 1, fi) == 1) {
      if (fread(&pot, sizeof(n), 1, fi) != 1) {
          perror("Greška kod čitanja");
          return EXIT_FAILURE;
      }
      printf("%2d %10u\n", n, pot);
   }
   fclose(fi);
   return EXIT_SUCCESS;   
}