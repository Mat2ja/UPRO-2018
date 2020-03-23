#include <stdio.h>
#define MAXCLAN 10

int main(void) {
   int i;
   int broj[MAXCLAN];

   printf("Upisite %d cijelih brojeva > ", MAXCLAN);

   for (i = 0; i < MAXCLAN; i = i + 1) {
      scanf("%d", &broj[i]);
   }

   int j, ind_min;

   for (i = 0; i < MAXCLAN - 1; i = i + 1) {
      ind_min = i + 1;
      for (j = i + 2; j < MAXCLAN; j = j + 1) {
         if (broj[j] % 10 < broj[ind_min] % 10) {
            ind_min = j;
         }
      }
      if (broj[ind_min] % 10 < broj[i] % 10) {
         int pomocna = broj[i];
         broj[i] = broj[ind_min];
         broj[ind_min] = pomocna;
      }
   }

   for (i = 0; i < MAXCLAN; i = i + 1) {
      printf("%d ", broj[i]);
   }

   return 0;
}