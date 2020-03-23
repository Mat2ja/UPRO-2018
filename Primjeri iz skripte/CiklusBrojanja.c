#include <stdio.h>
int main(void) {
   short int i;
   i = 0;
   while (i < 100000) {
      i = i + 1;
      printf("%d ", i);
   }
   printf("Gotovo!");
   return 0;
}
