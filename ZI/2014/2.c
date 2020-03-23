#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRED 200
#define MAXSTUP 400

void generiraj_zrna(int *zrna, int n) {
   int i;

   for (i = 0; i < n; i++) {
      zrna[i] = rand();
   }
}

void puni2d(int *zrna, int *brojevi, int m, int n, int maxstup) {
   int i, j;
   for (i = 0; i < n; i++) {
      srand(zrna[i]);

      for (j = 0; j < m; j++) {
         brojevi[j * maxstup + i] = rand();
      }
   }
}

int main(void) {
   int zrna[MAXSTUP];
   int brojevi[MAXRED][MAXSTUP];
   int i, j, m, n;

   srand((unsigned int)time(NULL));

   /* unositi dok nisu iz trazenog intervala */
   do {
      printf("Unesite broj redaka i broj stupaca:");
      scanf("%d %d", &m, &n);
   } while (m < 1 || MAXRED < m || n < 1 || MAXSTUP < n);

   /* pozivi funkcija */
   generiraj_zrna(zrna, n);
   puni2d(zrna, &brojevi[0][0], m, n, MAXSTUP);

   /* ispis */
   for (i = 0; i < m; i++) {
      printf("%3d. broj: ", i + 1);
      for (j = 0; j < n; j++) {
         printf("%10d ", brojevi[i][j]);
      }
      printf("\n");
   }

   return 0;
}