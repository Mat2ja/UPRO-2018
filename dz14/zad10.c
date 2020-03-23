#include <stdio.h>

int getBit(unsigned int x, unsigned int n) { return x >> n & 0x1; }

void printBinary(unsigned int x) {
   int i;

   for (i = 31; i >= 0; --i) {
      printf("%d", getBit(x, i));
   }
   return;
}

int main(void) {
   unsigned int broj;

   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &broj);
   printBinary(broj);

   return 0;
}