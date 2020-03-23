#include <stdio.h>

int main(void) {
   int i, brojUlaznih;

   printf("Upisite cijeli broj [5, 20] > ");
   scanf("%d", &brojUlaznih);

   int novaVelicinaPolja = 2 * brojUlaznih - 1;
   int polje[novaVelicinaPolja];

   printf("Upisite cijele brojeve (%d) > ", brojUlaznih);

   for (i = 0; i < brojUlaznih; i = i + 1) {
      scanf("%d", &polje[i]);
   }

   for (i = brojUlaznih - 1; i > 0; i = i - 1) {
      polje[i * 2] = polje[i];
      polje[i * 2 - 1] = polje[i] + polje[i - 1];
   }

   for (i = 0; i < novaVelicinaPolja; i = i + 1) {
      printf("%d ", polje[i]);
   }
   
   return 0;
}