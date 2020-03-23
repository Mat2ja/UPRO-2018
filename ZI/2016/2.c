#include <stdio.h>
#include <string.h>

// a)
void zamijeni(char *c1, char *c2) {
   char cuvaj = *c1;
   *c1 = *c2;
   *c2 = cuvaj;
   return;
}

// b)
char *traziSamoglas(char *niz) {
   char *c = strpbrk(niz, "aeiouAEIOU");
   return c;
}

// c)
int main(void) {
   char niz[80 + 1];
   char *samoglas1, *samoglas2;

   printf("Upisite niz: ");
   fgets(niz, 80 + 1, stdin);

   samoglas1 = traziSamoglas(niz);
   if (samoglas1 != NULL) {
      samoglas2 = traziSamoglas(samoglas1 + 1);
   }

   if (samoglas1 != NULL && samoglas2 != NULL) {
      zamijeni(samoglas1, samoglas2);
      printf("Rezultat je: %s", niz);
   } else {
      printf("Nema dovoljno samoglasnika.");
   }

   return 0;
}