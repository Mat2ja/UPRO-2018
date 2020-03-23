#include <stdio.h>

int main(void) {
   int suma = 0, n;

   scanf("%d", &n);

   while (n % 3 == 0 || n % 7 == 0) {
      suma = suma + n;
      scanf("%d", &n);
   }
   printf("suma = %d", suma);

   return 0;
}
