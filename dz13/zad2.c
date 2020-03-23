#include <stdio.h>

int main(void) {
   unsigned int broj;

   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &broj);
   
   printf("%u(10) = ", broj);

   int posmakDesno;

   for (posmakDesno = 30; posmakDesno >= 0; posmakDesno -= 3) {
      printf("%d", broj >> posmakDesno & 0x7);
   }
   printf("(8)");

   return 0;
}