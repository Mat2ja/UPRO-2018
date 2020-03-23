#include <stdio.h>

int main(void) {
   int a = 1, *b = &a;
   short x = 10, y = 20, *z = &y;

   *b = *z + 1;
   *z = *b + 5;

   printf("%d %d %hd %hd %hd\n", a, *b, x, y, *z);

   return 0;
}