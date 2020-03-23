#include <stdio.h>
int main(void) {
   int broj, prva, treca, peta;
   printf("Upisite 5-znamenkasti cijeli broj > ");
   scanf("%d", &broj);
   prva = broj / 10000;
   treca = broj / 100 % 10;
   peta = broj % 10;
   printf("%d %d %d", prva, treca, peta);
   return 0;
}