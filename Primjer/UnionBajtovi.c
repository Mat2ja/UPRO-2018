#include <stdio.h>
#include <stdbool.h>
//#pragma pack(1)
struct bajtovi {
   unsigned char b1;
   unsigned char b2;
   unsigned char b3;
   unsigned char b4;
};
union registar {
   int i;
   struct bajtovi b;
};
int main(void) {
   union registar w;
   w.i = 255 + 256;
   printf ("%d %d %d %d\n", w.b.b1, w.b.b2, w.b.b3, w.b.b4);
   w.b.b1 = 0;
   printf ("%d\n", w.i);
}