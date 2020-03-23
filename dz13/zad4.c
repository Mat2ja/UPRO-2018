#include <stdio.h>
int main(void) {
   unsigned int broj = 0u;
   int bit, poz;

   do {
      printf("Upisite bit i poziciju > ");
      scanf("%d %d", &bit, &poz);

      if ((bit == 0 || bit == 1) && poz >= 0 && poz <= 31) {
         if (bit == 1) {
            broj = broj | 0x1 << poz;
         } else {
            broj = broj & ~(0x1 << poz);
         }

         int posmakDesno;
         for (posmakDesno = 31; posmakDesno >= 0; posmakDesno--) {
            printf("%d", broj >> posmakDesno & 0x1);
         }
         printf("(2) = %u(10)\n", broj);
      } else {
         printf("Pogresna vrijednost ili pozicija bita");
      }
   } while ((bit == 0 || bit == 1) && poz >= 0 && poz <= 31);

   return 0;
}