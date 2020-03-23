#include <stdio.h>
void f(int n) {
   if (n <= 0)
      return;
   f(n - 1);
   printf("%d ", n);
}
int main(void) {
   f(2);
   return 0;
}
