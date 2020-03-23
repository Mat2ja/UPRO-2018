#include <stdio.h>

void zamijeni(int *x, int *y) {
   int pom;

   pom = *x;
   *x = *y;
   *y = pom;

   return;
}

void sort1D(int *polje, int n, _Bool silazno) {
   int ind_min_max, i, j;

   for (i = 0; i < n - 1; ++i) {
      ind_min_max = i + 1;
      if (silazno) {
         for (j = i + 2; j < n; ++j) {
            if (*(polje + j) > *(polje + ind_min_max))
               ind_min_max = j;
         }
         if (*(polje + ind_min_max) > *(polje + i)) {
            zamijeni(polje + ind_min_max, polje + i);
         }
      } else {
         for (j = i + 2; j < n; ++j) {
            if (*(polje + j) < *(polje + ind_min_max))
               ind_min_max = j;
         }
         if (*(polje + ind_min_max) < *(polje + i)) {
            zamijeni(polje + ind_min_max, polje + i);
         }
      }
   }
   return;
}

int main(void) {
   char smjerSorta;
   int n, i;

   printf("Upisite smjer poretka (S-silazno) > ");
   scanf("%c", &smjerSorta);

   printf("Upisite dimenziju > ");
   scanf("%d", &n);

   int polje[n];

   printf("Upisite clanove > ");

   for (i = 0; i < n; ++i) {
      scanf("%d", &polje[i]);
   }

   sort1D(polje, n, smjerSorta == 'S');

   for (i = 0; i < n; ++i) {
      printf("%d ", polje[i]);
   }

   return 0;
}