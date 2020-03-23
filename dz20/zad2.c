#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DG 50
#define GG 60
#define BROJ_GEN 1000000

int main(void) {
   srand((unsigned)time(NULL));

   int slucajni;
   int brojac[GG - DG + 1] = {0};

   for (int i = 0; i < BROJ_GEN; ++i) {
      slucajni = rand() % (GG - DG + 1) + DG;
      // (float)rand() / (RAND_MAX + 1) * (GG - DG + 1) +DG;
      ++brojac[slucajni - DG];
   }

   for (int i = DG; i <= GG; ++i) {
      printf("%3d %6d\n", i, brojac[i - DG]);
   }

   return 0;
}