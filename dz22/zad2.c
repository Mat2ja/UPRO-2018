#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define MAXNIZ 40
#define MINNIZ 10

int main(void) {
   char niz[MAXNIZ + 1];
   int duljina, brojZnamenki = 0;

   while ((duljina = strlen(fgets(niz, MAXNIZ + 1, stdin))) >= MINNIZ) {
      if (duljina >= MINNIZ) {
         for (char *p = niz; *p != '\0'; ++p) {
            if (isdigit(*p)) {
               ++brojZnamenki;
            }
         }
      }
   }

   printf("Broj znamenki: %d", brojZnamenki);

   return 0;
}
