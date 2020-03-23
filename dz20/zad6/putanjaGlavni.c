#include "putanja.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void) {
   char polje[N][N];

   inicijalizirajPolje(&polje[0][0], N);

   srand((unsigned)time(NULL));

   crtajPutanju(&polje[0][0], N, 'o');
   ispisiPolje(&polje[0][0], N);

   printf("\n");
   crtajPutanju(&polje[0][0], N, 'x');
   ispisiPolje(&polje[0][0], N);

   return 0;
}