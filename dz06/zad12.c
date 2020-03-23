#include <stdio.h>

int main(void) {
   int i, j, k, rbr = 0;

   for (i = 1; i <= 100; i = i + 1) {
      for (j = 1; j <= 100; j = j + 1) {
         for (k = 1; k <= 100; k = k + 1) {
            if (i * i + j * j == k * k) {
               rbr = rbr + 1;
               printf("%d. trojka: %d^2 + %d^2 = %d^2\n", rbr, i, j, k);
            }
         }
      }
   }
   return 0;
}