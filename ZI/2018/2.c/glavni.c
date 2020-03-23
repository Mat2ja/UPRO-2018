#include "gen.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXRED 50
#define MAXSTUP 50

int main(void) {
   int polje[MAXRED][MAXSTUP];
   int genRed, genStup, i, j, rbrMatrice;

   srand((unsigned)time(NULL));

   for (rbrMatrice = 1; rbrMatrice <= 10; ++rbrMatrice) {
      gen(&polje[0][0], MAXSTUP, &genRed, &genStup);
      printf("%d. matrica\n", rbrMatrice);

      for (i = 0; i < genRed; ++i) {
         for (j = 0; j < genStup; ++j) {
            printf("%3d", polje[i][j]);
         }
         printf("\n");
      }
      printf("\n");
   }
   
   return 0;
}