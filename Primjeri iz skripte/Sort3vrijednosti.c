#include <stdio.h>
int main (void) {

   int a, b, c, x, y, z;
   scanf ("%d %d %d", &a, &b, &c);
   if (a < b) {
      x = a;
      y = b;
   } else {
      x = b;
      y = a;
   }
   #if 1 // varijanta 1
   z = c;
   if (c < y) {
      z = y;
      y = c;
   }
   if (c < x) {
      y = x;
      x = c;
   }
   #else // varijanta 2
   if (c < x) {
      z = y;
      y = x;
      x = c;
   } else if (c < y) {
      z = y;
      y = c;
   } else {
      z = c;
   }
   #endif
   printf ("%d %d %d", x, y, z);

   return 0;
}
