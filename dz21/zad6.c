#include <stdio.h>
#include <string.h>

#define MAXNIZ 60

void izbaciNR(char *niz) {
   while (*niz != '\0') {
      if (*niz == '\n' && *(niz + 1) == '\0') {
         *niz = '\0';
      }
      ++niz;
   }
   return;
}

int main(void) {
   char niz1[MAXNIZ + 1], niz2[MAXNIZ + 1], niz3[MAXNIZ + 1];

   printf("Upisite 1. niz > ");
   fgets(niz1, MAXNIZ + 1, stdin);
   izbaciNR(niz1);

   printf("Upisite 2. niz > ");
   fgets(niz2, MAXNIZ + 1, stdin);
   izbaciNR(niz2);

   printf("Upisite 1. niz > ");
   fgets(niz3, MAXNIZ + 1, stdin);
   izbaciNR(niz3);

   char *p1 = niz1, *p2 = ni2, *p3 = niz3, *pom;

   if (strcmp(p1, p2) > 0) {
      pom = p1;
      p1 = p2;
      p2 = pom;
   }
   if (strcmp(p1, p3) > 0) {
      pom = p1;
      p1 = p3;
      p3 = pom;
   }
   if (strcmp(p2, p3) > 0) {
      pom = p2;
      p2 = p3;
      p3 = pom;
   }

   printf("%s\n%s\n%s", p1, p2, p3);

   return 0;
}