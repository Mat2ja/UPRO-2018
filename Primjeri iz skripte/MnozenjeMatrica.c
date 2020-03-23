#include <stdio.h>
#define MAX 100
void mMult(int m, int n, int o, int d, int a[d][d], int b[d][d], int c[d][d]) {
   int i, j, k;
   for (i = 0; i < m; i++) {
      for (j = 0; j < o; j++) {
         c[i][j] = 0;
         for (k = 0; k < n; k++) {
            c[i][j] += a[i][k] * b[k][j];
         }
      }
   }
}
int main(void) {
   int i, j, m = 2, n = 3, o = 4;
   int a[MAX][MAX] = {{1, 2, 3},
                      {4, 5, 6}};
   int b[MAX][MAX] = {{7, 8, 9, 10},
                      {11, 12, 13, 14},
                      {15, 16, 17, 18}};
   int c[MAX][MAX];                      
   mMult(m, n, o, MAX, a, b, c);
   for (i = 0; i < m; i++) {
      for (j = 0; j < o; j++) {
         printf("%3d ", c[i][j]);
      }
      printf("\n");
   }
}