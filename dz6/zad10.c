#include <stdio.h>

int main(void) {
   int m, n, i, j;

   printf("Upisite m, n > ");
   scanf("%d %d", &m, &n);

   for (i = 0; i < m; i = i + 1) {
      for (j = n - 1; j >= 0; j = j - 1) {
         printf("%4d", i + 1 + j);
      }
      printf("\n");
   }

   return 0;
}