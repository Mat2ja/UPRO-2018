#include <stdio.h>

void zamijeni(int *x, int *y) {
   int pom;

   pom = *x;
   *x = *y;
   *y = pom;
   
   return;
}

void sort1D(int *polje, int n, _Bool silazno) {
   int ind_min_max, i, j;

   for (i = 0; i < n - 1; ++i) {
      ind_min_max = i + 1;
      if (silazno) {
         for (j = i + 2; j < n; ++j) {
            if (*(polje + j) > *(polje + ind_min_max))
               ind_min_max = j;
         }
         if (*(polje + ind_min_max) > *(polje + i)) {
            zamijeni(polje + ind_min_max, polje + i);
         }
      } else {
         for (j = i + 2; j < n; ++j) {
            if (*(polje + j) < *(polje + ind_min_max))
               ind_min_max = j;
         }
         if (*(polje + ind_min_max) < *(polje + i)) {
            zamijeni(polje + ind_min_max, polje + i);
         }
      }
   }
   return;
}

void sort2D(int *polje, int m, int n, _Bool silazno) {
   int i;

   for (i = 0; i < m; ++i) {
      sort1D((polje + n * i + 0), n, silazno);
   }
   return;
}

int main(void) {
   char smjerSorta;
   int m, n, i, j;

   printf("Upisite smjer poretka (S-silazno) > ");
   scanf("%c", &smjerSorta);
   printf("Upisite dimenzije > ");
   scanf("%d %d", &m, &n);

   int mat[m][n];
   printf("Upisite clanove >\n");
   for (i = 0; i < m; ++i) {
      for (j = 0; j < n; ++j) {
         scanf("%d", &mat[i][j]);
      }
   }

   sort2D(&mat[0][0], m, n, smjerSorta == 'S');

   for (i = 0; i < m; ++i) {
      for (j = 0; j < n; ++j) {
         printf("%5d", mat[i][j]);
      }
      printf("\n");
   }

   return 0;
}