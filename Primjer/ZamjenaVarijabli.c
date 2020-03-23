#include <stdio.h>
int main(void) {
   int x, y, p;
   x = 3;
   y = 5;
   printf("x = %d, y = %d", x, y);
   p = x;
   x = y;
   y = p;
   printf("x = %d, y = %d", x, y);
}
