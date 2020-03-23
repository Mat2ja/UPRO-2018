#include <stdio.h>

int main(void) {
   int n = 11, suma = 0, sumiranih = 0;

   while (sumiranih < 100) {
      if (n % 7 = 0 || (((n / 10) % 10) + (n % 10) == 5)) {
         ++sumiranih;
         ++suma;
      }
      ++n
   }
   printf("%d", suma);
   return 0;
}