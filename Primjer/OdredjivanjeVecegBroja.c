#include <stdio.h>
int main(void) {
   int m, n, r;
   scanf("%d %d", &m, &n);
   if (m > n) {
      r = m;
   } else {
      r = n;
   }
   printf("%d\n", r);
   return 0;
}
