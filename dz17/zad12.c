#include <stdio.h>

int negativci(int *polje, int n, int *nadjeniNegativci) {
   int nNegativaca = 0, i;

   for (i = 0; i < n; ++i) {
      if (*(polje + i) < 0) {
         *(nadjeniNegativci + nNegativaca) = *(polje + i);
         ++nNegativaca;
      }
   }
   return nNegativaca;
}

int main(void) {
   int n, i, nNegativaca;

   printf("Upisite broj clanova > ");
   scanf("%d", &n);

   int polje[n];

   printf("Upisite clanove > ");

   for (i = 0; i < n; ++i) {
      scanf("%d", &polje[i]);
   }

   int nadjeniNegativci[n];

   nNegativaca = negativci(polje, n, nadjeniNegativci);

   for (i = 0; i < nNegativaca; ++i) {
      printf("%d ", nadjeniNegativci[i]);
   }

   return 0;
}