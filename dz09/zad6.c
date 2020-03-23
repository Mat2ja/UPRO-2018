#include <stdio.h>
#define MIN_RED 4
#define MAKS_RED 8
#define MIN_STUP 5
#define MAKS_STUP 10

int main(void) {
   int m, n;

   do {
      printf("Upisite m [%d, %d] > ", MIN_RED, MAKS_RED);
      scanf("%d", &m);
   } while (m < MIN_RED || m > MAKS_RED);

   do {
      printf("Upisite n [%d, %d] > ", MIN_STUP, MAKS_STUP);
      scanf("%d", &n);
   } while (n < MIN_STUP || n > MAKS_STUP);

   int polje[m][n];

   printf("Upisite %d x %d clanova >\n", m, n);

   int i, j;

   for (i = 0; i < m; i = i + 1) {
      for (j = 0; j < n; j = j + 1) {
         scanf("%d", &polje[i][j]);
      }
   }

   int sumaPoStupcima[n];

   for (j = 0; j < n; j = j + 1) {
      sumaPoStupcima[j] = 0;
      for (i = 0; i < m; i = i + 1) {
         sumaPoStupcima[j] = sumaPoStupcima[j] + polje[i][j];
      }
   }

   printf("Sume po stupcima:\n");

   for (j = 0; j < n; j = j + 1) {
      printf("%5d", sumaPoStupcima[j]);
   }
   
   return 0;
}