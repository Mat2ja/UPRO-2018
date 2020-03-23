#include <stdio.h>

int *prviNegativac(int *polje, int n) {
   int i;

   for (i = 0; i < n; ++i) {
      if (*(polje + i) < 0) {
         return polje + i;
      }
   }
   return NULL;
}

int main(void) {
   int n, i, *pokNaNegativca;

   printf("Upisite broj clanova > ");
   scanf("%d", &n);

   int polje[n];
   printf("Upisite clanove > ");

   for (i = 0; i < n; ++i) {
      scanf("%d", &polje[i]);
   }

   pokNaNegativca = prviNegativac(polje, n);

   if (pokNaNegativca == NULL) {
      printf("Nema negativnih");
   } else {
      printf("Prvi negativni je %d", *pokNaNegativca);
   }

   return 0;
}

