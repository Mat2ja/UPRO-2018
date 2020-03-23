#include <stdio.h>

#define MAXCLAN 10

int main(void) {
   int i;
   int broj[MAXCLAN];

   printf("Upisite %d cijelih brojeva > ", MAXCLAN);

   for (i = 0; i < MAXCLAN; i = i + 1) {
      scanf("%d", &broj[i]);
   }

   int pomocna;

   for (i = 0; i < MAXCLAN / 2; i = i + 1) {
      pomocna = broj[i];
      broj[i] = broj[MAXCLAN - 1 - i];
      broj[MAXCLAN - 1 - i] = pomocna;
   }

   for (i = 0; i < MAXCLAN; i = i + 1) {
      if (i > 0) {
         printf(", ");
      }
      printf("%d", broj[i]);
   }
   // moj komentar

   return 0;
}