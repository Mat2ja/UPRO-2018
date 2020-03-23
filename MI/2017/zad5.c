#include <stdio.h>

int main(void) {
   int a = 7, b, c = 3, d = 2;
   float m;
   b = a++ + 2;
   m = a + b / c * d + 0.5f;
   printf("%4d%4d\n%6.2f\n", a, b, m);
   printf("%c%d", 10, 10);
   return 0;
}