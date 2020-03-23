#include <stdio.h>
#define MAKS_RED 100
#define MAKS_STUP 100

int main(void) {
   int i, j, m, n, stupacNajveceg, najveciSePonovio;
   int mat[MAKS_RED][MAKS_STUP];

   printf("Upisati m i n:\n");
   scanf("%d %d", &m, &n);
   printf("Upisati clanove polja:\n");

   for (i = 0; i < m; ++i)
      for (j = 0; j < n; ++j)
         scanf("%d", &mat[i][j]);
         
   printf("\nRezultat:\n");
   for (i = 0; i < m; ++i) {
      stupacNajveceg = 0;
      najveciSePonovio = 0;
      for (j = 1; j < n; ++j) {
         if (mat[i][j] > mat[i][stupacNajveceg]) {
            stupacNajveceg = j;
            najveciSePonovio = 0;
         } else if (mat[i][j] == mat[i][stupacNajveceg]) {
            najveciSePonovio = 1;
         }
      }
      if (!najveciSePonovio) {
         printf("(%d,%d): %d\n", i, stupacNajveceg, mat[i][stupacNajveceg]);
      }
   }
   return 0;
}