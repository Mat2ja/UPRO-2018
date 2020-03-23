#include <math.h>
#include <stdio.h>

int main(void) {
   int djeljiv = 0;
   int n, djeljitelj;

   printf("Upisite prirodni broj > ");
   scanf("%d", &n);
   djeljitelj = 2;

   while (djeljitelj <= sqrt(n) && djeljiv == 0) {
      if (n % djeljitelj == 0) {
         djeljiv = 1;
      }
      if (djeljitelj == 2) {
         djeljitelj = djeljitelj + 1;
      } else {
         djeljitelj = djeljitelj + 2;
      }
   }
   if (djeljiv == 1 || n == 1) {
      printf("%d nije prim broj\n", n);
   } else {
      printf("%d jest prim broj\n", n);
   }

   return 0;
}