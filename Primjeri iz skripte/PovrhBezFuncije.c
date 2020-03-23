#include <stdio.h>
int main(void) {
   int i, n, k;
   double nf, kf, nmkf;
   scanf ("%d %d", &n, &k);
   for (i = 1, nf = 1; i <= n; i++) {
      nf *= i;
   }
   for (i = 1, kf = 1; i <= k; i++) {
      kf *= i;
   }
   for (i = 1, nmkf = 1; i <= n-k; i++) {
      nmkf *= i;
   }
   printf ("%d povrh %d = %g\n", n, k, nf / (kf*nmkf));
   return 0;
}
