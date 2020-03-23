#include <stdio.h>

int main(void) {
   int n, i;
   float x, m, zbrojUmnozaka, masaUkupno;

   printf("Unesite prirodan broj n:\n");
   scanf("%d", &n);

   masaUkupno = zbrojUmnozaka = 0.f;
   i = 1;

   while (i <= n) {
      printf("Unesite koordinatu i masu %d-og tijela:\n", i);
      scanf("%f %f", &x, &m);
      if (m > 0) {
         zbrojUmnozaka += m * x;
         masaUkupno += m;
         ++i;
      }
   }

   printf("x-koordinata tezista %d tijela (Xt) je: %f", n,
          zbrojUmnozaka / masaUkupno);

   return 0;
}