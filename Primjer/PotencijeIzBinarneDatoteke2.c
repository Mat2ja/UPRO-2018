#include <stdio.h>
#include <stdlib.h>
int main(void) {
   FILE *fi;
	int n;
   struct potencija {
      unsigned int n;
      unsigned int pot;
   } p[32];
   fi = fopen("potencije.bin", "rb");
   if (fi == NULL) {
      perror("Nije uspjelo otvaranje datoteke potencije.bin");
      return EXIT_FAILURE;
   }
   n = fread (p, sizeof(p), 1, fi);
   for (int i=0; i < 32; i++) {
      printf("%2d %10u\n", p[i].n, p[i].pot);
   }
   fclose(fi);
   return EXIT_SUCCESS;   
}