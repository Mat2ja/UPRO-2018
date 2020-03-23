#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_N 2
#define MAX_N 8
#define DG 150
#define GG 160
#define BROJ_ZAPISA 20

int main(void) {
   FILE *izTok;

   int i, j, n, polje[MAX_N];

   izTok = fopen("slucajni.bin", "wb");

   /* inicijalizacija generatora sluc. brojeva */
   srand((unsigned)time(NULL));

   for (i = 1; i <= BROJ_ZAPISA; ++i) {
      /* odaberi slucajan n */
      n = rand() % (MAX_N - MIN_N + 1) + MIN_N;

      /* odaberi n slucajnih brojeva */
      for (j = 0; j < n; ++j) {
         polje[j] = rand() % (GG - DG + 1) + DG;
         fwrite(&n, sizeof(n), 1, izTok);
         fwrite(polje, sizeof(int), n, izTok);
         /* ili fwrite(polje, sizeof(int)*n, 1, izTok); */
      }
   }
   fclose(izTok);
   return 0;
}