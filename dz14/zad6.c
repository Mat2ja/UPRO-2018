#include <stdio.h>
#define MAXCLAN 15

void fibonacci15(void) {
   int i;
   int fbroj[MAXCLAN];

   fbroj[0] = fbroj[1] = 1;

   for (i = 2; i < MAXCLAN; ++i) {
      fbroj[i] = fbroj[i - 1] + fbroj[i - 2];
   }

   for (i = 0; i < MAXCLAN; ++i) {
      if (i > 0)
         printf(", ");
      printf("%d", fbroj[i]);
   }
   return;
}

int main(void) {

   fibonacci15();

   return 0;
}