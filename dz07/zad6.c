#include <stdio.h>

int main(void) {
   int granica, n, i;

   do {
      printf("Upisite granicu > ");
      scanf("%d", &granica);

      n = granica;

      printf("granica = %d\n", granica);

      while (n > 0) {
         for (i = 1; i <= n; i = i + 1) {
            printf("%4d", i);
         }
         printf("\n");
         n = n - 1;
      }
   } while (granica > 0);

   return 0;
}