#include <stdio.h>

int main(void) {

   int n, i, a_i_minus2, a_i_minus1 = 1, a_i = 1;

   printf("Upisite broj clanova Fibonaccijevog niza > ");
   scanf("%d", &n);

   for (i = 1; i <= n; i = i + 1) {
      if (i > 2) {
         a_i_minus2 = a_i_minus1;
         a_i_minus1 = a_i;
         a_i = a_i_minus1 + a_i_minus2;
      }
      if (i > 1)
         printf(", ");
      printf("%d", a_i);
   }
   return 0;
}