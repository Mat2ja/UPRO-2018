#include <stdio.h>
void f(int n, int g) {
   if (n > g) return;
   printf("%d ", n);
   f(n+1, g);
}
int main(void) {
   f(1, 2);
   return 0;
}
