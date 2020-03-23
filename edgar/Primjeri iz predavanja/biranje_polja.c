#include <stdio.h>
int main(void) {
   int n; // velicina polja
   int i; // kontrolna varijabla petlje za ucitavanje i ispis
   /* ponavljati upisivanje velicine polja dok ne bude ispravna */
   do {
      printf("Upisite broj clanova polja > ");
      scanf("%d", &n);
   } while (n < 1);
   /* definicija VLA polja */
   float polje[n];
   /* ucitavanje clanova polja */
   for (i = 0; i < n; i = i + 1) {
      printf("Upisite %d. clan > ", i + 1);
      scanf("%f", &polje[i]);
   }
   /* ispisivanje clanova polja u obrnutom poretku */
   for (i = n - 1; i >= 0; i = i - 1) {
      if (i < n - 1) { // ispisati zarez prije svakog osim prvog
         printf(", ");
      }
      printf("%.1f", polje[i]);
   }
   printf("\n");
   return 0;
}