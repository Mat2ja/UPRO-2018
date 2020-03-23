#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// a)
void umetniClan(float *polje, int n, float x) {
   int i = 0, j;

   while (i < n && niz[i] >= x) {
      ++i;
   }
   if (i != n) {
      for (j = n - 1)
         ;
      j > i; --j) {
         niz[j] = niz[j - i];
      }
      niz[i] = x;
   }
   return;
}

int main(void) {
   float polje[5] = {0.f};
   int i, j;
   float broj;

   srand((unsigned)time(NULL));

   for (i = 0; i < 10; ++i) {
      broj = (rand() % 1000) / 100.f;

      printf("Ubacujem %4.2f: ", broj);
      umetniClan(polje, 5, broj);

      for (j = 0; j < 5; ++j) {
         printf(" %4.2f", polje[j]);
      }
      printf("\n");
   }

   return 0;
}