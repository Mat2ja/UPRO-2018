#include <stdio.h>
#define MAXRED 100
#define MAXSTUP 100

int main(void) {
   int polje[MAXRED][MAXSTUP];
   int m, n;
   int i, j;
   int ind_max = 0;
   int najveci_se_ponovio;

   printf("Upisati m i n:\n");
   scanf("%d %d", &m, &n);
   printf("Upisati clanove polja:\n");

   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
         scanf("%d", &polje[i][j]);
      }
   }
   printf("\n");

   printf("Rezultat:\n");
   for (i = 0; i < m; i++) {
      for (j = 1; j < n; j++) {
         if (polje[i][j] > polje[i][j - 1]) {
            ind_max = j;
            najveci_se_ponovio = 0;
         } else if (polje[i][j] == polje[i][ind_max]) {
            najveci_se_ponovio = 1;xg
         }
      }
      if (najveci_se_ponovio != 1) {
         printf("(%d, %d) : %d\n", i, ind_max, polje[i][ind_max]);
      }
   }
   return 0;
}