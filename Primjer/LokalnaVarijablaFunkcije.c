#include <stdio.h>
void f(int x) {
   int y;
   y = x;    // c)
   x = x + 1; // d)
   return;   // e)
}
int main(void) {
   int x = 1;  // a)
   f(x);      // b)
   printf("%d\n", x);  // f)
   return 0;
}
