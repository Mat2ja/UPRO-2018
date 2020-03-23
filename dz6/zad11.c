#include <stdio.h>

int main(void) {
   int n, minNeg = 0, maxPoz = 0;

   printf("Upisite brojeve > ");
   do {
      scanf("%d", &n);
      if (n != 0) {
         if (n > maxPoz) {
            maxPoz = n;
         } else if (n < minNeg) {
            minNeg = n;
         }
      }
   } while (n != 0);

   if (minNeg == 0) {
      printf("Nije upisan niti jedan negativni broj\n");
   } else {
      printf("Najmanji negativan = %d\n", minNeg);
   }
   if (maxPoz == 0) {
      printf("Nije upisan niti jedan pozitivni broj");
   } else {
      printf("Najveci pozitivan = %d", maxPoz);
   }
   return 0;
}