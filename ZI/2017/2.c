#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gen(int *mat, int m, int n, int maxstup) {
   int i, j;

   for (i = 0; i < m; ++i)
      for (j = 0; j < n; ++j)
         *(mat + i * maxstup + j) = rand() % 2;
}

int main(void) {
   int i, j, k;
   int mat[50][100];

   srand((unsigned)time(NULL));

   for (k = 0; k < 10; ++k) {
      gen(&mat[0][0], 3, 5, 100);
      for (i = 0; i < 3; ++i) {
         for (j = 0; j < 5; ++j) {
            printf("%d ", mat[i][j]);
         }
         printf("\n");
      }
      printf("\n");
   }

   return 0;
}