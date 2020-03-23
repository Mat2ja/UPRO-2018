#include <stdio.h>
int main(void) {
   int n, i, fakt;
   scanf("%d", &n);
   fakt = 1;
   i = 2;
   while (i <= n) {
      fakt = fakt * i;
      i = i + 1;
   }
   printf("%d! = %d", n, fakt);
   return 0;
}