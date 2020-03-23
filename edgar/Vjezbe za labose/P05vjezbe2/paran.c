#include <stdio.h>
int main(void) {

   int i = 1, j;
   while (i < 3) {
      i = i + 1;
      for (j = 1; j < 5; j = j + 1) {
         if (j % 2 != 0)
            continue;
         printf("Broj %d je paran\n", j);
      }
   }
   return 0;
}