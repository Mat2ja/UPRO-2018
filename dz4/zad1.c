#include <stdio.h>

int main(void) {
   float x, y;
   int odabir;
   
   printf("Upisite dva realna broja > ");
   scanf("%f %f", &x, &y);
   printf("Upisite vrstu operacije (1-zbrajanje, 2-mnozenje) > ");
   scanf("%d", &odabir);
   
   if (odabir == 1) {
	  printf("Zbroj je %.6f", x + y);
   } else if (odabir == 2) {
	  printf("Umnozak je %.6f", x * y);
   } else {
      printf("Neispravan odabir operacije");
   }
   return 0;
}