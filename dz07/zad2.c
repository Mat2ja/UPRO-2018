#include <stdio.h>
#define DONJA_GR 1000
#define GORNJA_GR 10000

int main(void) {
   int n; // broj koji ce se testirati
   int djeljitelj, djeljiv;

   for (n = DONJA_GR; n <= GORNJA_GR; n = n + 1) {
      djeljiv = 0;    // hipoteza: n nije djeljiv
      djeljitelj = 2; // pocni testiranje dijeljenjem s 2
      while (djeljitelj <= n - 1 && djeljiv == 0) {
         if (n % djeljitelj == 0) {
            djeljiv = 1;
         }
         djeljitelj = djeljitelj + 1;
      }
      if (djeljiv == 0 || n == 1) {
         printf("%d\n", n);
      }
   }
   return 0;
}