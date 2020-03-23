#include <stdio.h>
#include <stdarg.h>
int sum (int broj, ...) {
   int r, i;  
   va_list args;
   va_start (args, broj);
   for (i = 0, r = 0; i < broj; i++) {
      r += va_arg(args, int);
   }
   va_end(args);
   return r;
}
int main(void) {
   printf("%d\n", sum(3, 1, 2, 3));
   return 0;
}
