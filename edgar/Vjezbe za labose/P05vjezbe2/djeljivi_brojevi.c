#include <stdio.h>

int main(void) {
   int i;

   for (i = 1; i < 10; i = i + 1) {
      if (i % 3 != 0) {
         printf("%d*2=%d\n", i, i * 2);
      } else {
         printf("%d je djeljiv s 3\n", i);
      }
   }
   return 0;
}