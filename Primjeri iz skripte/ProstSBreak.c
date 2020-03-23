#include <stdio.h>
int main(void) {
   int i, n;     
   scanf("%d", &n);
   for (i = 2; i < n; i++) {
      if (n % i == 0) break;   
   }
   if (i == n) {
      printf("%d je prost broj.\n", n);
   } else {
      printf("%d nije prost broj.\n", n);
   }
   return 0;
}
