#include <stdio.h>

int main(void) {
   int i, j, k;

   k = 0;

   for (i = 0; i < 4; i = i + 1)
      for (j = i + 1; j < 4; j = j + 1)
         k = k + 1;
   printf("k=%d ", k);

   return 0;
}