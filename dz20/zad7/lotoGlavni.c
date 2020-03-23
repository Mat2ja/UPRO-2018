#include "loto.h"
#include <stdio.h>

#define BROJ_IZVLACENJA 10

int main(void) {
   for (int i = 1; i <= BROJ_IZVLACENJA; ++i) {
      printf("%2d. izvlacenje: ", i);
      resetirajBubanj();

      for (int j = 0; j < 7; ++j) {
         printf("%3d", dajSljedecuKuglicu());
      }

      printf("\n");
   }

   return 0;
}