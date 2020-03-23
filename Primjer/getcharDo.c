#include <stdio.h>
int main(void) {
   char c;
   do {
      c = getchar();
      printf(" %d %c", c, c);
   } while (c != EOF);
   return 0;
}
