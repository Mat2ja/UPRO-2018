#include <stdio.h>
#include <string.h>

#define MAXNIZ 50

void umetniZnak(char *niz, char z) {
   int i, poz = 0;

   while (*(niz + poz) != '\0' && *(niz + poz) < z) {
      ++poz;
   }

   for (i = strlen(niz); i >= poz; --i) {
      *(niz + i + 1) = *(niz + i);
   }
   *(niz + poz) = z;

   return;
}

int main(void) {
   char niz[MAXNIZ + 1];
   char noviniz[MAXNIZ + 1] = {""};

   printf("Upisite niz: ");
   fgets(niz, MAXNIZ + 1, stdin);

   char *p = niz;

   while (*p != '\0') {
      umetniZnak(noviniz, *p);
      p++;
   }

   printf("Novi niz   : %s", noviniz);

   return 0;
}