#include <stdio.h>
#define MAXZNAKOVA 100

int main(void) {
   char ulaz[MAXZNAKOVA + 1], izlaz[MAXZNAKOVA + 1];
   int indexUlaz = 0, indexIzlaz = 0;

   printf("Upisite niz: ");
   gets(ulaz);

   while (ulaz[indexUlaz] != '\0') {
      if (indexIzlaz % 2 == 0) { /* trebam veliko slovo */
         if (ulaz[indexUlaz] >= 'A' && ulaz[indexUlaz] <= 'Z') {
            izlaz[indexIzlaz] = ulaz[indexUlaz];
            ++indexIzlaz;
         }
      } else { /* trebam malo slovo */
         if (ulaz[indexUlaz] >= 'a' && ulaz[indexUlaz] <= 'z') {
            izlaz[indexIzlaz] = ulaz[indexUlaz];
            ++indexIzlaz;
         }
      }
      ++indexUlaz;

   }
   izlaz[indexIzlaz] = '\0';

   printf("Izlazni niz: %s\n", izlaz);
   printf("Ulazni niz: %s\n", ulaz);

   return 0;
}