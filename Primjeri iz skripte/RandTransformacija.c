#include <stdio.h>
#include <stdlib.h>
int main(void) {
   int staro = 1, brojac = 0, i, novo, odg = 1, dog = 6;
   for (i = 0; i <= RAND_MAX; i++) {
      novo = i / (RAND_MAX + 1.) * (dog - odg + 1) + odg;
      if (novo != staro) {
         printf("%d %d\n", staro, brojac);
         brojac = 0;
         staro = novo;
      }
      brojac++;
   }
   printf("%d %d\n", staro, brojac);
   return 0;
}
