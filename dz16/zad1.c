#include <stdio.h>

int main(void) {
   int a = 2, x = 10;
   int *p = &a;

   x += 3 * *p;

   printf("%d %d\n", *p, x);

   return 0;
}

// 2 16