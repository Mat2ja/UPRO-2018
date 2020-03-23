#include <stdio.h>
int main(void) {
   int n, i, fakt;
   scanf("%d", &n);
   fakt = 1;
   for (i = 2; i <= n; i = i + 1) {
      fakt = fakt * i;
   }
   printf("%d! = %d", n, fakt);
   return 0;
}