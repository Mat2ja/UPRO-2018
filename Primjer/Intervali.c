#include <stdio.h>
int main (void) {
   int a1, a2, b1, b2;
   scanf ("%d %d %d %d", &a1, &a2, &b1, &b2);
   if (b1 > a2 || a1 > b2 ) { // slučajevi 1. i 2.
      printf ("Intervali nemaju presjeka\n");
   } else if (b1 >= a1) { // slučajevi 3. ili 5., treba odrediti koji
      if (b2 <= a2) { // slučaj 5.
         printf ("Presjek je [%d, %d]\n", b1, b2);
      } else { // Slučaj 3
         printf ("Presjek je [%d, %d]\n", b1, a2);
      }
   } else { // slučajevi 4 ili 6
      if (a2 <= b2) { // slučaj 6.
         printf ("Presjek je [%d, %d]\n", a1, a2);
       } else { // Slučaj 4
         printf ("Presjek je [%d, %d]\n", a1, b2);
      }
   }
   return 0;
}
