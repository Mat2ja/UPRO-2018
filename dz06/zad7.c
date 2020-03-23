#include <stdio.h>

int main(void) {
   int m, n, i, fakt_m = 1, fakt_n = 1, fakt_mn = 1, rez = 0;

   printf("Upisite m i n > ");
   scanf("%d %d", &m, &n);

   if (m >= 0 && n >= 0 && m >= n) {
      for (i = 2; i <= m; ++i) {
         fakt_m = fakt_m * i;
      }
      for (i = 2; i <= n; ++i) {
         fakt_n = fakt_n * i;
      }
      for (i = 2; i <= m - n; ++i) {
         fakt_mn = fakt_mn * i;
      }
      rez = fakt_m / (fakt_n * fakt_mn);
      printf("%d povrh %d = %d", m, n, rez);
   } else {
      printf("m ili n su neispravni");
   }
   return 0;
}