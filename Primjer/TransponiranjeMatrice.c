#include <stdio.h>
#define max(a, b) ((a) > (b) ? (a) : (b))

int main(void) {
   int m, n, i, j, pom;

   printf("Unesite broj redaka i broj stupaca:");
   scanf("%d %d", &m, &n);

   int p[max(m, n)][max(m, n)];

   printf("Unesite elemente po retcima:");

   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &p[i][j]);
      }
   }

   // transponiranje
   for (i = 0; i < max(m, n); i++) {
      for (j = 0; j < i; j++) {
         pom = p[i][j];
         p[i][j] = p[j][i];
         p[j][i] = pom;
      }
   }

   // ispis: izmijenjena matrica ima n redaka i m stupaca
   for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
         printf("%2d ", p[i][j]);
      }
      printf("\n");
   }
}
