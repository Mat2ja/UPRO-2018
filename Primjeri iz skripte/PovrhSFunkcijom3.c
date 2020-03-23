#include <stdio.h>
double povrh(int n, int k) {
   int i;
   double r;
   if (k < n - k) {
      for (r = 1, i = 1; i <= k; i++) {
         r *= (double)(n - (k - i)) / i;     
      }
   } else {
      for (r = 1, i=1; i <= n - k; i++) {
         r *= (double)(k + i) / i;     
      }
   }
   return r;
}
int main(void) {
   int n, k;
   scanf("%d %d", &n, &k);
   printf("%d povrh %d = %g\n", n, k, povrh(n,k));
   return 0;
}
