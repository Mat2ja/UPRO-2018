#include <stdio.h>

#define MAX 30

int main(void) {
   int niz[MAX + 1];
   int c, i = 0;
   int brojNR = 0;
   int brojUcit = 0;

   while (brojUcit < 30 && (c = getchar()) != '#') {
      ++brojUcit;
      if (c == '\n') {
         ++brojNR;
      }
      niz[i++] = c;
   }
   niz[i] = '\0';

   if (c == '#') {
      ungetc(c, stdin);
   }

   printf("Znakova novi red: %d\n", brojNR);
   printf("%s", niz);

   return 0;
}