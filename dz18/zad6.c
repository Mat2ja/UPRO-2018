#include <stdio.h>
#define MAX_NIZ 20

char *traziPrviSamoglas(char *niz) {
   while (*niz != '\0') {
      if (*niz == 'a' || *niz == 'A' || *niz == 'e' || *niz == 'E' ||
          *niz == 'i' || *niz == 'I' || *niz == 'o' || *niz == 'O' ||
          *niz == 'u' || *niz == 'U') {
         return niz;
      }
      ++niz;
   }
   return NULL;
}

int main(void) {
   char niz[MAX_NIZ + 1];

   printf("Upisite niz > ");
   fgets(niz, MAX_NIZ + 1, stdin);
   printf("Svi samoglasnici: ");

   char *traziOdOvogMjestaNadalje = niz;
   char *pokNaPrviSamoglas;

   do {
      pokNaPrviSamoglas = traziPrviSamoglas(traziOdOvogMjestaNadalje);
      if (pokNaPrviSamoglas != NULL) {
         printf("%c", *pokNaPrviSamoglas);
         traziOdOvogMjestaNadalje = pokNaPrviSamoglas + 1;
      }
   } while (pokNaPrviSamoglas != NULL);

   return 0;
}