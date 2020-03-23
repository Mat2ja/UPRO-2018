#include <stdio.h>

int main(void) {
   int suma = 0, n;

   do {
      scanf("%d", &n);
      suma = suma + n;
   } while (n % 3 == 0 || n % 7 == 0);

   printf("suma = %d", suma);

   return 0;
}
