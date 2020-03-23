#include <stdio.h>
void f(int n) {
   printf("%d ", n);
   f(n + 1);
}
int main(void) {
   f(1);
   return 0;
}