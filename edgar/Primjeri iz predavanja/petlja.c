#include <stdio.h>
int main(void) {
   int i, n;
   printf("Upisite broj n > ");
   scanf("%d", &n);
   for (i = n - 1; i > 0; i = i - 1) {
      if ((i % 7 == 0) || (i % 13 == 0) || (i % 19 == 0)) {
         printf("%d\n", i);
      }
   }
   return 0;
}