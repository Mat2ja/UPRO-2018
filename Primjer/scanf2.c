#include <stdio.h>
int main(void) {
   char a, b, c;
   while (scanf("%c%c%c", &a, &b, &c) == 3) {
      printf("%d %d %d\n", a, b, c);
   }
   return 0;
}
