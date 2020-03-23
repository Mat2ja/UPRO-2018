#include <stdio.h>
int main(void) {
   unsigned int broj;

   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &broj);

   printf("%u(10) = ", broj);

   int posmakDesno;

   for (posmakDesno = 28; posmakDesno >= 0; posmakDesno -= 4) {
      int znamenka = broj >> posmakDesno & 0xF;
      if (znamenka >= 0 && znamenka <= 9) {
         printf("%d", znamenka);
      } else {
         printf("%c", znamenka - 10 + 'A');
      }
   }
   printf("(16)");

   return 0;
}