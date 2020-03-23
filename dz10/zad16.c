#include <stdio.h>

int main(void) {
   unsigned n;

   do {
      printf("Upisite heksadekadski nenegativni cijeli broj > ");
      scanf("%x", &n);
      if (n != 0) {
         printf("%11d\n", n);
      }
   } while (n != 0);

   return 0;
}