#include <stdio.h>

int main(void) {
   int polje[2][3] = {{2, 11, 23}, {47, 51, 59}};
   int *p = &polje[0][1], i = 3;

   p += i;
   *(--p) = --i;

   printf("%d %d\n", *p, i);

   return 0;
}

// 2 2