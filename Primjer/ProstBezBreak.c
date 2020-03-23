#include <stdio.h>
#include <stdbool.h>
int main(void) {
   bool prost;
   int i, n;     
   scanf("%d", &n);
   for (i = 2, prost = true; prost && i < n; i++) {
      if (n % i == 0) prost = false;   
   }
   if (prost) {
      printf("%d je prost broj.\n",  n);
   } else {
      printf("%d nije prost broj.\n",  n);
   }
   return 0;
}
