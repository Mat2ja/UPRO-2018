#include <stdio.h>

int main(void) {
   unsigned int broj;

   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &broj);

   printf("%u(10) = ", broj);

   int posmakDesno;

   for (posmakDesno = 31; posmakDesno >= 0; posmakDesno--) {
      printf("%d", broj >> posmakDesno & 0x1);
   }
   printf("(2)");

   return 0;
}