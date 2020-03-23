#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int x;

   printf("Upisite dvoznamenkasti prirodni broj > ");
   scanf("%d", &x);

   if (x != 5)
      printf("Prva znamenka broja %d je %d", x, abs(x / 10));
   else
      printf("Zadnja znamenka broja %d je %d", x, abs(x % 10));

   return 0;
}