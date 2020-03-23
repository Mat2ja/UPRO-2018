#include <stdio.h>

int main(void) {
   float a1, a2, b1, b2, r1, r2;
   printf("Upisite granice 1. intervala > ");
   scanf("%f %f", &a1, &a2);
   printf("Upisite granice 2. intervala > ");
   scanf("%f %f", &b1, &b2);

   if (a2 < a1 || b2 < b1 || b1 < a1) {
      printf("Granice intervala su neispravne");
   } else {
      if (a2 >= b1) {
         r1 = b1;
         if (a2 > b2) {
            r2 = b2;
         } else {
            // a2 <= b2
            r2 = a2;
         }
         printf("Presjek intervala je [%.3f, %.3f]", r1, r2);
      } else {
         printf("Presjek intervala je prazan skup");
      }
   }
   return 0;
}
