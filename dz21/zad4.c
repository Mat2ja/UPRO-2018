#include <stdio.h>
#include <string.h>

int brojPodnizova(char *s1, char *s2) {
   char *pocetakPotrage = s1;
   int brojac = 0;

   while ((pocetakPotrage = strstr(pocetakPotrage, s2)) != NULL) {
      ++brojac;
      ++pocetakPotrage;
   }
   return brojac;
}

void izbaciNR(char *niz) {
   while (*niz != '\0') {
      if (*niz == '\n' && *(niz + 1) == '\0') {
         *niz = '\0';
      }
      ++niz;
   }
   return;
}

#define MAXNIZ 60

int main(void) {
   char niz1[MAXNIZ + 1], niz2[MAXNIZ + 1];

   printf("Upisite 1. niz > ");
   fgets(niz1, MAXNIZ + 1, stdin);
   izbaciNR(niz1);

   printf("Upisite 2. niz > ");
   fgets(niz2, MAXNIZ + 1, stdin);
   izbaciNR(niz2);

   printf("2. niz se u 1. nizu pojavljuje %d puta", brojPodnizova(niz1, niz2));

   return 0;
}