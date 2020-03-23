#include <stdio.h>

int main(void) {
   int i;

   i = !0 <= 101 % 100;
   printf("%d\n", i);

   i = (!1 && !200) || (!0 && !100);
   printf("%d\n", i);

   i = (!1 && !0) || 100 + 'a' - 'A';
   printf("%d\n", i);

   i = 'a' - 'A' + 18;
   printf("%c %d\n", i, i);

   i = 10;
   printf("%d\n", i == 15);

   printf("%d\n", i);

   _Bool b1, b2 = 17, b3;
   b1 = 10 == 10 == 1;
   b3 = 0 == 0 == 10;

   printf("%d %d %d\n", b1, b2, b3);

   return 0;
}