#include <stdio.h>

int main(void) {
   int i;
   unsigned int k, m;
   unsigned short j;

   scanf("%d%ho", &i, &j); // ho je octa, 12(dec)=10(octa)
   scanf(" %x %x ", &k, &m); // ucitano 13 i 1e

   printf("|%d|%hx|\n", i, j); // 10(octa)=a(hexa)
   printf("|%d|%d|\n", k, m); // 13(hexa)=19(dec)[3*16na0+1*16] // 1e(hexa)=30(dec)
   printf("|%c|", getchar()); // sljedeci char u nizu je X

   return 0;
}





/*
|11|a|
|19|30|
|X|
*/