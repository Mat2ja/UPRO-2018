#include <stdio.h>

int main(void) {
   int n1, n2;
   int suma = 0;

   printf("Upisati brojeve: ");

   scanf("%d", &n2);
   suma = n2;

   do {
      n1 = n2;
      scanf("%d", &n2);
      if (n2 > n1) {
         suma = suma + n2;
      }
   } while (n2 > n1);

   printf("Suma: %d", suma);
   return 0;
}