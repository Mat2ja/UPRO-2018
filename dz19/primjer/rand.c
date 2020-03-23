#include "rand.h"
#define A 9001
#define C 2531011
#define M 225

static int clan;

void setSeed(int seed) { clan = seed; }

int getRand(void) {
   clan = (A * clan + C) % M;
   
   return clan;
}