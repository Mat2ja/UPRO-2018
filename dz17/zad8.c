#include <stdio.h>

void transpKvad(int *mat, int n) {
   int i, j, pomocna;

   for (i = 0; i < n - 1; ++i) {
      for (j = 0; j < n; ++j) {
         pomocna = *(mat + n * i + j);
         *(mat + n * i + j) = *(mat + n * j + i);
         *(mat + n * j + i) = pomocna;
      }
   }
   return;
}

int main(void) {
   int n, i, j;

   printf("Upisite red matrice > ");
   scanf("%d", &n);

   int mat[n][n];

   printf("Upisite clanove >\n");

   for (i = 0; i < n; ++i) {
      for (j = 0; j < n; ++j) {
         scanf("%d", &mat[i][j]);
      }
   }

   transpKvad(&mat[0][0], n);

   for (i = 0; i < n; ++i) {
      for (j = 0; j < n; ++j) {
         printf("%5d", mat[i][j]);
      }
      printf("\n");
   }

   return 0;
}