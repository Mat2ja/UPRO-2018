#include <stdio.h>
int main(void) {
   int a, b, c;
   int nUcitano, nIspisano;
   nUcitano = scanf("%d %d %d", &a, &b, &c);
   nIspisano = printf("%d %d %d %d\n", nUcitano, a, b, c);
   printf("%d\n", nIspisano);
   return 0;
}
