#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRED 100
#define MAXSTUP 150
#define DG 100
#define GG 200

void maskiraj(int *mat, int *maska, int m, int n) {

   for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        *(mat + MAXSTUP * i + j) *= *(maska + MAXSTUP * i + j);
        // *(mat + n * i + j) *= *(maska + n * i + j);
      }
   }
}

// mi bi imali VLA pa nema potrebe za maxstup

int main(void) {
   int mat[MAXRED][MAXSTUP]; //[m][n]
   int maska[MAXRED][MAXSTUP]; //[m][n]
   int m, n;

   srand((unsigned)time(NULL));

   printf("Unesite dimenzije > ");
   scanf("%d %d", &m, &n);

   for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
         mat[i][j] = rand() % (GG - DG + 1) + DG;
         maska[i][j] = rand() % 2;
      }
   }

   maskiraj(&mat[0][0], &maska[0][0], m, n);

   for (int i = 0; i < m; i++) {
      printf("\n");
      for (int j = 0; j < n; j++) {
         printf("%3d ", mat[i][j]);
      }
   }

   return 0;
}