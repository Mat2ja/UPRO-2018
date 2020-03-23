#include <stdio.h>
#define MAXNIZ 20

void ucitajPrebroji(int *pbrojVel, int *pbrojMal) {
   char niz[MAXNIZ + 1];

   *pbrojVel = *pbrojMal = 0;

   printf("Upisite niz > ");
   fgets(niz, MAXNIZ + 1, stdin);

   int i = 0;
   while (niz[i] != '\0') {
      if (niz[i] >= 'A' && niz[i] <= 'Z') {
         ++*pbrojVel;
      } else if (niz[i] >= 'a' && niz[i] <= 'z') {
         ++*pbrojMal;
      }
      ++i;
   }
   return;
}

int main(void) {
   int velika, mala;

   ucitajPrebroji(&velika, &mala);

   printf("Broj velikih slova: %d\n", velika);
   printf("Broj malih slova: %d\n", mala);

   return 0;
}