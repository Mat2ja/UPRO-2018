#include <stdio.h>

#define MAKS 10

int main(void) {
   char polje[MAKS];

   printf("Upisite 10 znakova > ");

   int i;
   for (i = 0; i < MAKS; i = i + 1) {
      scanf("%c", &polje[i]);
   }

   printf("Original :");
   for (i = 0; i < MAKS; i = i + 1) {
      printf("%c", polje[i]);
   }

   int j, ind_min;
   for (i = 0; i < MAKS - 1; i = i + 1) {
      ind_min = i + 1;
      for (j = i + 2; j < MAKS; j = j + 1) {
         if (polje[j] < polje[ind_min]) {
            ind_min = j;
         }
      }

      if (polje[ind_min] < polje[i]) {
         char pomocna = polje[i];
         polje[i] = polje[ind_min];
         polje[ind_min] = pomocna;
      }
   }

   printf("\nSortirani:");
   for (i = 0; i < MAKS; i = i + 1) {
      printf("%c", polje[i]);
   }

   return 0;
}