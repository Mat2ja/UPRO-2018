#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int x;

   printf("Upisite troznamenkasti prirodni broj > ");
   scanf("%d", &x);
   printf("Srednja znamenka broja %d je %d", x, abs((x / 10) % 10));

   return 0;
}
