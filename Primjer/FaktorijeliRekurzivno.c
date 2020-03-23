#include <stdio.h>
double fakt(int n) {
   if (n <= 1) return 1;
   return fakt(n-1)*n;
}
int main(void) {
   int i, n;
   double f;
   while (1) {
      scanf ("%d", &n);
      printf ("%d! = %.15g\n", n, fakt(n));
   }
   return 0;
}
