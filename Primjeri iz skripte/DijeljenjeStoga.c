#include <stdio.h>
void f() {
   int a;
   a = 777;
}
int g() {
   int b;
   return b;
}
int main(void) {
   int r;
   f();
   r = g();
   printf("%d\n", r);
   return 0;
}
