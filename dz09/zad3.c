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
   int najmanji;
   for (j = 0; j < n; j = j + 1) {
      printf("%d. stupac: ", j + 1);
      najmanji = polje[0][j];
      for (i = 1; i < m; i = i + 1) {
         if (polje[i][j] < najmanji) {
            najmanji = polje[i][j];
         }
      }
      int prviPar = 1;
      for (i = 0; i < m; i = i + 1) {
         if (polje[i][j] == najmanji) {
            if (prviPar == 1) {
               prviPar = 0;
            } else {
               printf(", ");
            }
            printf("(%d, %d)", i, j);
         }
      }
      printf("\n");
   }
   return 0;
}