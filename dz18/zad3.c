#include <stdio.h>
#define MAX_NIZ 20

char *traziZadnjiZnak(char *niz, char z) {
   char *zadnjaPojava = NULL;

   while (*niz != '\0') {
      if (*niz == z) {
         zadnjaPojava = niz;
      }
      ++niz; // niz = niz + 1
   }
   return zadnjaPojava;
}

int main(void) {
   char niz[MAX_NIZ + 1];
   char z;
   char *pokNaZadnjeg;

   printf("Upisite niz > ");
   fgets(niz, MAX_NIZ + 1, stdin);

   printf("Upisite znak > ");
   scanf("%c", &z);

   pokNaZadnjeg = traziZadnjiZnak(niz, z);

   if (pokNaZadnjeg == NULL) {
      printf("U nizu nema zadanog znaka");
   } else {
      printf("%d", pokNaZadnjeg - niz);
   }

   return 0;
}