#include <stdio.h>
void mInput(char *poruka, int m, int n, int a[m][n]) {
   int i, j;
   printf("%s", poruka);
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &a[i][j]);
      }
   }
}
void mAdd(int m, int n, int a[m][n], int b[m][n], int c[m][n]) {
   int i, j;
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         c[i][j] = a[i][j] + b[i][j];
      }
   }
}
int main(void) {
   int m, n, i, j;
   printf("Unesite broj redaka i broj stupaca:");
   scanf("%d %d", &m, &n);
   int a[m][n];   
   mInput("Unesite elemente prve matrice po retcima:", m, n, a);
   int b[m][n];
   mInput("Unesite elemente druge matrice po retcima:", m, n, b);
   int c[m][n];                      
   mAdd(m, n, a, b, c);
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         printf("%2d ", c[i][j]);
      }
      printf("\n");
   }
}