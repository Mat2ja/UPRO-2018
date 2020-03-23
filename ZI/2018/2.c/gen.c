#include "gen.h"
#include <stdlib.h>

void gen(int *polje, int maxStup, int *m, int *n) {
   int i, j;

   *m = rand() % MAXGENRED + 1;
   *n = rand() % MAXGENSTUP + 1;

   for (i = 0; i < *m; ++i) {
      for (j = 0; j < *n; ++j) {
         *(polje + i * maxStup + j) =
             rand() % (MAXGENV - MINGENV + 1) + MINGENV;
      }
   }
   return;
}