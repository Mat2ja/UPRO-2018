#include <stdio.h>

int main(void) {
   int n, i, j;

   do {
      printf("Upisite vrijednost za n: ");
      scanf("%d", &n);
   } while (n < 1 || n > 15);

   printf("Tablica mnozenja %dx%d\n", n, n);
   printf(" ");

   for (i = 1; i <= n; ++i) {
      printf("%4d", i);
   }
   printf("\n");

   printf("----+", i);
   for (i = 1; i <= n; ++i) {
      printf("----", i);
   }
   printf("\n");

   for (i = 1; i <= n; ++i) {
      printf("%4d!", i);
      for (j = 1; j <= n; ++j) {
         printf("%4d", i * j);
      }
      printf("\n");
   }

   printf("----+", i);
   for (i = 1; i <= n; ++i) {
      printf("----", i);
   }
   printf("\n");

   return 0;
}
