#include <stdio.h>

int main(void) {
   int n = 1; // broj koji ce se testirati
   int djeljitelj, djeljiv, brojIspisanih = 0;

   while (brojIspisanih < 25) {
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
         brojIspisanih = brojIspisanih + 1;
      }
      n = n + 1;
   }
   return 0;
}