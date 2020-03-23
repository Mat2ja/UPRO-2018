#include <stdio.h>

int main(void) {
   int i, brojUlaznih;

   printf("Upisite cijeli broj [5, 20] > ");
   scanf("%d", &brojUlaznih);

   int novaVelicinaPolja = brojUlaznih / 2;
   int polje[brojUlaznih];

   printf("Upisite cijele brojeve (%d) > ", brojUlaznih);

   for (i = 0; i < brojUlaznih; i = i + 1) {
      scanf("%d", &polje[i]);
   }

   for (i = 0; i < novaVelicinaPolja; i = i + 1) {
      polje[i] = polje[2 * (i + 1) - 1];
   }

   for (i = 0; i < novaVelicinaPolja; i = i + 1) {
      printf("%d ", polje[i]);
   }

   return 0;
}