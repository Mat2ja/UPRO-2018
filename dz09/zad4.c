#include <stdio.h>

int main(void) {
   int m, n;

   printf("Upisite m, n > ");
   scanf("%d %d", &m, &n);

   int polje[m][n];

   printf("Upisite %d x %d clanova >\n", m, n);

   int i, j;

   for (i = 0; i < m; i = i + 1) {
      for (j = 0; j < n; j = j + 1) {
         scanf("%d", &polje[i][j]);
      }
   }

   for (j = 0; j < n; j = j + 1) {
      // u svakom stupcu j obavljaj sljedece
      int pomocni = polje[0][j]; // spasi j-ti clan iz 0-tog retka
      for (i = 0; i < m - 1; i = i + 1) {
         // clan u i-tom retku postavi na clan iz (i+1)-vog retka
         polje[i][j] = polje[i + 1][j];
      }
      // u zadnji redak stavi spaseni j-ti clan iz 0-tog retka
      polje[m - 1][j] = pomocni;
   }

   printf("Nakon posmaka:\n");

   for (i = 0; i < m; i = i + 1) {
      for (j = 0; j < n; j = j + 1) {
         printf("%4d", polje[i][j]);
      }
      printf("\n");
   }

   return 0;
}