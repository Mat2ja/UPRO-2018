#include "funkcije.h"
#include <stdio.h>

int main(void) {
   char niz[50 + 1];
   char *velikoSlovo;

   printf("Upisite niz: ");
   fgets(niz, 50 + 1, stdin);

   velikoSlovo = kazaljka(niz);

   if (velikoSlovo == NULL) {
      printf("Nema velikog slova");
   } else {
      printf("Prvo veliko slovo je: %c\n", *velikoSlovo);
      printf("Ostatak niza je: %s", velikoSlovo + 1);
   }

   return 0;
}