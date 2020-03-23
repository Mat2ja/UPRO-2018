#include <stdio.h>
#define N 8
#define DG 0
#define GG 7

int main(void) {
   char polje[N][N];
   int i, j;
   unsigned a, b;

   printf("Upisite a i b: ");
   scanf("%u %u", &a, &b);

   for (i = 0; i < N; ++i) {
      for (j = 0; j < N; ++j) {
         polje[i][j] = 'K';
      }
   }

   printf("Unesite a i b; ");
   scanf("%u %u", &a, &b);

   for (i = 0; i < N; ++i) {
      polje[i][b] = polje[a][i] = '-';
   }

   polje[a][b] = 'T';

   for (i = 0; i < N; ++i) {
      for (j = 0; j < N; ++j) {
         printf("%c", m[i][j]);
      }
      printf("\n");
   }

   return 0;
}