#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXZNAK 100

void izbaci_znak(char *niz, char *znak, int *pozicija) {
   int duljina = strlen(niz);
   
   if (duljina == 0) {
      *znak = '\0';
      *pozicija = -1;
      return;
   }
   *pozicija = rand() % duljina;
   *znak = niz[*pozicija];
   strcpy(&niz[*pozicija], &niz[*pozicija + 1]);
}

int main(void) {
   char niz[MAXZNAK + 1];
   char c;
   int n, poz;

   srand((unsigned)time(NULL));

   printf("Unesite niz znakova:");
   fgets(niz, MAXZNAK + 1, stdin);

   while (strcmp(niz, "") != 0) {
      izbaci_znak(niz, &c, &poz);
      printf("Novi niz: %s, izbacen je znak %c s pozicije %d.\n", niz, c, poz);
   }

   return 0;
}