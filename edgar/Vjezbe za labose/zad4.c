#include <stdio.h>

int main(void) {

   int x, z1, z2, z3;

   printf("Upisite prirodan broj > ");
   scanf("%d", &x);

   z1 = x / 100;
   z2 = (x / 10) % 10;
   z3 = x % 10;

   if (x <= 0) {
      printf("Neispravan broj");
   } else {
      printf("Umnozak znamenaka broja %d je %d", x, z1 * z2 * z3);
   }
   return 0;
}