#include <stdio.h>
int main(void) {
   int broj, a, b, c, min;

   do {
      printf("Unesite troznamenkasti broj: ");
      scanf("%d", &broj);
   } while (broj < 99 || broj > 1000);

   a = broj / 100;
   b = (broj % 100) / 10;
   c = broj % 10;
   min = a;

   if (b < c) {
      if (b < a)
         min = b;
   } else {
      if (c < a)
         min = c;
   }
   printf("Najmanja znamenka u broju %d je: %d", broj, min);

   return 0;
}