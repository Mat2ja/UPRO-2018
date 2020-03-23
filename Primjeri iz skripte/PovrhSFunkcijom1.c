#include <stdio.h>
double fakt(int n) {
   int i;
   double f;
   for (i = 1, f = 1; i <= n; i++) {
      f *= i;
   }
   return f;
}
double povrh(int n, int k) {
   return fakt(n) / (fakt(k) * fakt(n-k));
}
int main(void) {
   int n, k;
   scanf("%d %d", &n, &k);
   printf("%d povrh %d = %g\n", n, k, povrh(n,k));
   return 0;
}
