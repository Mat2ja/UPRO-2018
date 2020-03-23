#include <stdio.h>
int main(void) {
   int stanje; // pocetno stanje u lipama
   int kuna, lipa;
   printf("Upisite stanje racuna u lipama > ");
   scanf("%d", &stanje);
   kuna = stanje / 100;
   lipa = stanje % 100;
   printf("Kuna: %d Lipa: %d", kuna, lipa);
   return 0;
}