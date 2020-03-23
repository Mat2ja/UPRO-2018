#include <stdio.h>

int main(void) {
   int datum = 0x497A;

   printf("Godina: %d\n", ((datum & 0xFE00) >> 9) + 1980);
   /* 0xFE00 je isto što i 0x0000FE00 */
   /* dobra su i sljedeća rješenja:
   printf("Godina: %d\n", ((datum >> 9) & 0x7F) + 1980);
   printf("Godina: %d\n", (datum >> 9) + 1980);
   printf("Godina: %d\n", (datum /512) + 1980);
   */

   return 0;
}