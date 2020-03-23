#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DG 10.0f
#define GG 15.0f
#define BROJ_RAZREDA 10
#define BROJ_GEN 5000000

int main(void) {
   srand((unsigned)time(NULL));

   float slucajni;
   int index;
   int brojac[BROJ_RAZREDA] = {0};

   for (int = 0; i < BROJ_GEN; ++i) {
      slucajni = (float)rand() / RAND_MAX * (GG - DG) + DG;
      index =
          slucajni == GG ? BROJ_RAZREDA - 1 : (int)(slucajni * 2) - (int)DG * 2;
      ++brojac[index];
   }

   for (int i = 0; i < BROJ_RAZREDA; ++i) {
      printf("[%4.1f - %4.1f%c -> %7d\n", DG + i / 2.f, DG + (i + 1) / 2.f,
             i == BROJ_RAZREDA - 1 ? ']' : ')', brojac[i])
   }

   return 0;
}