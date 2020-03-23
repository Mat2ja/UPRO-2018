#include <stdio.h>

#define BR_RED 4  // broj redaka
#define BR_STUP 5 // broj stupaca

int main(void) {
   int redak, stupac;
   float polje[BR_RED][BR_STUP];

   /* ucitavanje vrijednosti clanova polja */
   printf("Upisite clanove polja >\n");

   for (redak = 0; redak < BR_RED; redak = redak + 1) {
      for (stupac = 0; stupac < BR_STUP; stupac = stupac + 1) {
         scanf("%f", &polje[redak][stupac]);
      }
   }

   /* ispis praznog retka nakon ucitavanja */
   printf("\n");

   /* ispis polja u obliku tablice */
   for (redak = 0; redak < BR_RED; redak = redak + 1) {
      for (stupac = 0; stupac < BR_STUP; stupac = stupac + 1) {
         printf("%8.2f", polje[redak][stupac]);
      }
      /* skok u novi red nakon ispisa jednog retka tablice */
      printf("\n");
   }

   return 0;
}