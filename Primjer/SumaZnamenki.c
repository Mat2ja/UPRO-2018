#include <stdio.h>
int main (void) {
   int a, suma = 0;
   scanf("%d", &a);
   while (a != 0) {
      suma = suma + a % 10;
      a = a / 10;
   }
   printf("%d\n", suma);
   return 0;
}
