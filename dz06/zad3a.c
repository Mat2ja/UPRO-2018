#include <stdio.h>

int main(void) {
   int suma = 0, n;

   scanf("%d", &n);
   suma = suma + n;

   while (n % 3 == 0 || n % 7 == 0) {
      scanf("%d", &n);
      suma = suma + n;
   }

   printf("suma = %d", suma);

   return 0;
}