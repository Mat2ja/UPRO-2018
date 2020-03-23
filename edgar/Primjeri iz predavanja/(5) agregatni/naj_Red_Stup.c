#include <stdio.h>

#define MAKS_RED 4  // najveci dopusteni broj redaka
#define MAKS_STUP 5 // najveci dopusteni broj stupaca

int main(void) {
   int i, j;          // kontrolne varijable za petlje
   int brred, brstup; // stvarni broj redaka i stupaca

   /* Ucitavanje brred dok ne bude ispravan */
   do {
      printf("Upisite broj redaka > ");
      scanf("%d", &brred);
   } while (brred < 1 || brred > MAKS_RED);

   /* Ucitavanje brstup dok ne bude ispravan */
   do {
      printf("Upisite broj stupaca > ");
      scanf("%d", &brstup);
   } while (brstup < 1 || brstup > MAKS_STUP);

   /* definicija VLA polja dimenzija brred x brstup */
   int polje[brred][brstup];

   /* Ucitavanje clanova polja */
   printf("Upisite %d x %d cijelih brojeva >\n", brred, brstup);
   for (i = 0; i < brred; i = i + 1) {
      for (j = 0; j < brstup; j = j + 1) {
         scanf("%d", &polje[i][j]);
      }
   }

   /* pronadji i ispisi najveci clan u svakom retku */
   int stupacNajveceg;

   printf("Najveci clanovi po retcima:\n");

   for (i = 0; i < brred; i = i + 1) {
      /* pronadji indeks najveceg u retku i */
      stupacNajveceg = 0; // pretpostavka: prvi je najveci
      for (j = 1; j < brstup; j = j + 1) {
         if (polje[i][j] > polje[i][stupacNajveceg]) {
            stupacNajveceg = j; // promijeni pretpostavku
         }
      }
      printf("polje(%d, %d) = %d\n", i, stupacNajveceg,
             polje[i][stupacNajveceg]);
   }

   return 0;
}