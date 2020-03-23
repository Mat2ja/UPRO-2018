#include <stdio.h>

void ispisiStupacMaksimuma(int *polje, int m, int n) {
   int maxIndex;
   int i, j;

   for (i = 0; i < m; ++i) {
      maxIndex = 0;
      for (j = 0; j < n; ++j) {
         if (*(polje + n * i + j) > *(polje + n * i + maxIndex)) {
            maxIndex = j;
         }
      }
      printf("&d\n", maxIndex + 1);
   }

   return;
}

int main(void) {
   int m, n;
   int polje[m][n];

   printf("Upisi broj redova i stupaca > ");
   scanf("%d %d", &m, &n);

   int i, j;

   for (i = 0; i < m; ++i) {
      for (j = 0; j < n; ++j) {
         scanf("%d", &polje[i][j]);
      }
   }

   ispisiStupacMaksimuma(&polje[0][0], m, n);

   return 0;
}