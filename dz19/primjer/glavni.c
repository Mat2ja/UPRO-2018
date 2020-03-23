#include "rand.h"
#include <stdio.h>

int main(void) {
   int i;

   printf("Postavi na 100:\n");
   setSeed(100);

   for (i = 1; i <= 10; ++i)
      printf("%5d\n", getRand());

   printf("Postavi na 51:\n");

   setSeed(51);

   for (i = 1; i <= 5; ++i)
      printf("%5d\n", getRand());

   return 0;
}