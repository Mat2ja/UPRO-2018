#include <stdio.h>
#define MAXCLAN 10

int main(void) {
   int i;
   int broj[MAXCLAN];

   printf("Upisite %d cijelih brojeva > ", MAXCLAN);

   for (i = 0; i < MAXCLAN; i = i + 1) {
      scanf("%d", &broj[i]);
   }
   for (i = MAXCLAN - 1; i >= 0; i = i - 1) {
      if (i < MAXCLAN - 1) {
         printf(", ");
      }
      printf("%d", broj[i]);
   }

   return 0;
}