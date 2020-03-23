#include <stdio.h>
#define MAX_NIZ 8

int main(void) {
   char niz[MAX_NIZ + 1];

   printf("Upisite niz > ");

   fgets(niz, MAX_NIZ + 1, stdin);

   // izbaci znak novog retka
   int i = 0;

   while (niz[i] != '\0') {
      if (niz[i] == '\n')
         niz[i] = '\0';
      i = i + 1;
   }
   printf("Niz: %s\n", niz);

   unsigned int broj = 0U;

   i = 0;

   while (niz[i] != '\0' && ((niz[i] >= '0' && niz[i] <= '9') ||
                             (niz[i] >= 'A' && niz[i] <= 'F'))) {
      if (niz[i] >= '0' && niz[i] <= '9') {
         broj = broj * 16 + niz[i] - '0';
      } else {
         broj = broj * 16 + niz[i] - 'A' + 10;
      }
      i = i + 1;
   }

   if (niz[i] == '\0') {
      // doslo se do kraja, dakle sve znamenke su bile ispravne
      printf("Dekadski: %u", broj);
   } else {
      printf("Neispravan znak %c na poziciji %d.", niz[i], i + 1);
   }

   return 0;
}