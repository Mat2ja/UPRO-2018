#include <stdio.h>
#define MAKS_DULJ 100

int main(void) {
   char ulaz[MAKS_DULJ + 1];
   char izlaz[MAKS_DULJ + 1];
   int duljNiz = 0;
   int indexUlaz;
   int indexIzlaz = 0;

   printf("Upisati niz: ");
   gets(ulaz);

   while (ulaz[duljNiz] != '\0') {
      ++duljNiz;
   }
   if (duljNiz > 0 && duljNiz % 2 == 0) {
      for (indexUlaz = 0; indexUlaz < duljNiz; indexUlaz += 2) {
         if (ulaz[indexUlaz] >= 'a' && ulaz[indexUlaz] <= 'z' ||
             ulaz[indexUlaz + 1] >= 'a' && ulaz[indexUlaz + 1] <= 'z') {
            izlaz[indexIzlaz++] = 'X';
         } else {
            izlaz[indexIzlaz++] = ulaz[indexUlaz];
            izlaz[indexIzlaz++] = ulaz[indexUlaz + 1];
         }
      }
      
      izlaz[indexIzlaz] = '\0';
      printf("Izlazni niz: %s", izlaz);
   }
   return 0;
}