#include <stdio.h>
#define BR_SLOJEVA 4
#define BR_REDAKA 3
#define BR_STUPACA 6
int main(void) {
   int polje[BR_SLOJEVA][BR_REDAKA][BR_STUPACA];
   int i, j, k;
   // u ovom zadatku lakse je polje napuniti petljama nego inicijalizatorom
   for (i = 0; i < BR_SLOJEVA; i = i + 1) {
      for (j = 0; j < BR_REDAKA; j = j + 1) {
         for (k = 0; k < BR_STUPACA; k = k + 1) {
            polje[i][j][k] = (i + 1) * 100 + (j + 1) * 10 + k + 1;
         }
      }
   }
   for (i = 0; i < BR_SLOJEVA; i = i + 1) {
      printf("%d. sloj\n", i + 1);
      for (j = 0; j < BR_REDAKA; j = j + 1) {
         for (k = 0; k < BR_STUPACA; k = k + 1) {
            printf("%5d", polje[i][j][k]);
         }
         printf("\n");
      }
      if (i < BR_SLOJEVA - 1) {
         printf("\n");
      }
   }
   return 0;
}