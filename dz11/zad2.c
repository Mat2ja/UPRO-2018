#include <stdio.h>
#define MAX_NIZ 20

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

   int najveci = niz[0];

   i = 0; // krece od nule jer bi niz mogao biti prazan

   while (niz[i] != '\0') {
      if (niz[i] > najveci) {
         najveci = niz[i];
      }
      i = i + 1;
   }
   printf("Najveca ASCII vrijednost: %d", najveci);

   return 0;
}