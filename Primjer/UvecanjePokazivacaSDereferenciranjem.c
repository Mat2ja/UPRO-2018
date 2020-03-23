#include <stdio.h>
int main(void) {
   int a[] = {1, 2}, r;
   int *p = a;
   //r = ++*p;
   //r = *++p;
   //r = *p++;
   r = (*p)++;
   printf ("%u %u %d %d %d", a, p, r, a[0], a[1]);
}
