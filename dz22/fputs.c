#include <stdio.h>
#include <string.h>

#define MAXNIZ 10

int main(void) {
   char niz[MAXNIZ + 1];

   while (strstr(fgets(niz, MAXNIZ + 1, stdin), "KRAJ") == NULL) {
      fputs(niz, stdout);
   }

   return 0;
}