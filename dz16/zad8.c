#include <stdio.h>

int vratiDvostruko(int *n) {
   int rez;

   rez = (*n *= 2);

   return rez;
}

int main(void) {
   int a = 10, rezultat;

   rezultat = vratiDvostruko(&a);
   printf("Rezultat je %d", rezultat);

   return 0;
}