#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DG_M 5
#define GG_M 10
#define DG_N 10
#define GG_N 20

void gadjajPolje(int *polje, int m, int n, int brojHitaca) {
   for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j)
         *(polje + n * i + j) = 0;

   for (int i = 0; i < brojHitaca; ++i) {
      int slucajniRedak = rand() % m;
      int slucajniStupac = rand() % n;
      ++*(polje + n * slucajniRedak + slucajniStupac);
   }
   return;
}

int main(void) {
   int m, n;

   srand((unsigned)time(NULL));
   m = rand() % (GG_M - DG_M + 1) + DG_M;
   n = rand() % (GG_N - DG_N + 1) + DG_N;
   int polje[m][n];

   int brojHitaca;
   printf("Upisite broj hitaca > ");
   scanf("%d", &brojHitaca);

   gadjajPolje(&polje[0][0], &m, &n, brojHitaca);

   for (int i = 0; i < m; ++i) {
      for (int j = 0; i < n; ++j) {
         printf("%4d", polje[i][j]);
      }
      printf("\n");
   }

   return 0;
}