#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_N 2
#define MAX_N 8
#define DG 150
#define GG 160
#define BROJ_ZAPISA 50

int main(void) {
   FILE *izTok = fopen("slucajni.bin", "wb");

   srand((unsigned)time(NULL));

   int n, polje[MAX_N];

   for (int i = 1; i <= BROJ_ZAPISA; ++i) {

      // odaberi i zapisi slucajan n
      n = rand() % (MAX_N - MIN_N + 1) + MIN_N;
   // ili (float)rand() / (RAND_MAX + 1) * (MAX_N - MIN_N + 1) + MIN_N
      fwrite(&n, sizeof(n), 1, izTok);

      // odaberi i zapisi n slucajnih brojeva
      for (int j = 0; j < n; ++j) {
         polje[j] = rand() % (GG - DG + 1) + DG;
      }
      fwrite(polje, sizeof(int), n, izTok);
   }

   fclose(izTok);

   return 0;
}