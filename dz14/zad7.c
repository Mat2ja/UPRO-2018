#include <stdio.h>

void fibonacciN(int n) {
   int i;
   int fbroj[n];

   if (n > 0)
      fbroj[0] = 1;

   if (n > 1)
      fbroj[1] = 1;

   for (i = 2; i < n; ++i) {
      fbroj[i] = fbroj[i - 1] + fbroj[i - 2];
   }

   for (i = 0; i < n; ++i) {
      if (i > 0)
         printf(", ");
      printf("%d", fbroj[i]);
   }
   return;
}

int main(void) {
   int n;

   printf("Upisite broj clanova > ");
   scanf("%d", &n);
   fibonacciN(n);

   return 0;
}