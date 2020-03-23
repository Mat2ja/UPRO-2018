#include <stdio.h>

#define MAXRED 10
#define MAXSTUP 20

void podmatrica(int *mat1, int *mat2, int r1, int s1, int *r2, int *s2,
                int maxs1, int maxs2) {
   int i, j, i2 = 0, j2 = 0, minr, mins;
   int min = *(mat1);

   for (i = 0; i < r1; i++) {
      for (j = 0; j < s1; j++) {
         if (mat1[i * maxstup1 + j] < min) {
            min = mat1[i * maxstup1 + j];
            minr = i;
            mins = j;
         }
      }
   }

   *r2 = r1 - minr;
   *s2 = s1 - mins;

   for (i = minr; i < r1; i++) {
      for (j = mins; j < s1; j++)
         mat2[(i - minr) * maxstup2 + (j - mins)] = mat1[i * maxstup1 + j];
   }
}

int main() {
   int mat1[MAXRED][MAXSTUP];
   int mat2[MAXRED][MAXSTUP];
   int r1, s1, r2, s2, i, j;

   do {
      printf("Broj redaka i stupaca mat1: ");
      scanf("%d %d", &r1, &s1);
   } while (r1 < 1 || r1 > MAXRED || s1 < 1 || s1 > MAXSTUP);

   for (i = 0; i < r1; i++) {
      for (j = 0; j < s1; j++) {
         printf("mat1[%d][%d]: ", i + 1, j + 1);
         scanf(" %d", &mat1[i][j]);
      }
   }

   podmatrica(&mat1[0][0], &mat2[0][0], r1, s1, &r2, &s2, MAXSTUP, MAXSTUP);

   printf("\n\nMATRICA MAT2:\n");

   for (i = 0; i < r2; i++) {
      for (j = 0; j < s2; j++) {
         printf("%3d", mat2[i][j]);
         printf("\n");
      }
   }

   return 0;
}