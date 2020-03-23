#include <stdio.h>

int getBit(unsigned int x, unsigned int n) { return x >> n & 0x1; }

int main(void) {
   unsigned int broj, n;

   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &broj);

   printf("Upisite redni broj bita > ");
   scanf("%u", &n);

   printf("Vrijednost bita je %d ", getBit(broj, n));

   return 0;
}