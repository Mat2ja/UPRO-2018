#include <stdio.h>
int main(void) {
   int a = 263;
   int *pa = &a;
   printf ("%d %d %d %d\n", *(char *)pa, *((char *)pa + 1), *((char *)pa + 2), *((char *)pa + 3));
   return 0;
}
