#include <stdio.h>

double zbroj2D(double *mat, int m, int n) {
   double suma = 0;

   for (int i = 0; i < m * n; ++i) {
         suma += *(mat + i);
      }
   }
   return suma;
}

int main(void) {
   int m, n;
   double mat[m][n];

   printf("Upisite dimezije > ");
   scanf("%d %d", &m, &n);

   printf("Upisite clanove > ");

   for (int i = 0; i < m; ++i) {
      for (int j; i < n; ++j) {
         scanf("%lf", &mat[i][j]);
      }
   }

   double rezultat = zbroj2D(&mat[0][0], m, n);
   printf("Suma je %lf", rezultat);

   return 0;
}
