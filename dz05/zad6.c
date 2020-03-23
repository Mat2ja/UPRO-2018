#include <stdio.h>

int main(void) {
   int n = 11, sumaranih = 0, suma = 0;
   \\ne kuzim kaj je sumirano

       while (sumiranih < 20) {
      if (n % 7 == 0 || n % 10 + n % 100 / 10 == 5) {
         sumiranih = sumiranih + 1;
         suma = suma + n;
      }
      n = n + 1
   }
   printf("%d", suma);

   return 0;
}