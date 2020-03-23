#include <stdio.h>
#include <float.h>
int main(void) {
   int i, n;
   double f;
   while (1) {
      scanf ("%d", &n);
      for (f = 1, i = 1; i <= n; i++) {
         f *= i;
      } 
      printf ("%d! = %.15g\n", n, f);
   }
   return 0;
}
