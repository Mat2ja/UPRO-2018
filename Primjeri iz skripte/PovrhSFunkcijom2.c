#include <stdio.h>
double produkt(int brojOd, int brojDo) {
   int i;
   double r;
   for (i = brojOd, r = 1; i <= brojDo; i++) {
      r *= i;
   }
   return r; 
}
double fakt(int n) {
   return produkt(1, n);
}
double povrh(int n, int k) {
   if (k > n - k) {
      return produkt(k+1, n) / fakt(n-k);
   } else {
      return produkt(n-k+1, n) / fakt(k);
   }
}
int main(void) {
   int n, k;
   scanf("%d %d", &n, &k);
   printf("%d povrh %d = %g\n", n, k, povrh(n,k));
   return 0;
}
