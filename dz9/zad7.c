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
      // u svakom stupcu sortiraj clanove u retcima 0 do m-1
      for (i = 0; i < m - 1; i = i + 1) {
         int k, ind_min = i + 1;
         for (k = i + 2; k < m; k = k + 1) {
            if (polje[k][j] < polje[ind_min][j])
               ind_min = k;
         }
         if (polje[ind_min][j] < polje[i][j]) {
            int pomocna = polje[i][j];
            polje[i][j] = polje[ind_min][j];
            polje[ind_min][j] = pomocna;
         }
      }
   }

   printf("Nakon sortiranja stupaca:\n");

   for (i = 0; i < m; i = i + 1) {
      for (j = 0; j < n; j = j + 1) {
         printf("%4d", polje[i][j]);
      }
      printf("\n");
   }

   return 0;
}