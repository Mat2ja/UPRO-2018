#include <stdio.h>
#define MAX 20

void izbaciNR(char *niz) {
   while (*niz != '/0') {
      if (*niz == '/n' && *(niz + 1) == '/0') {
         *niz = '/0';
      }
      ++niz;
   }
   return 0;
}

_Bool umetniZnak(char *niz, char znak, char poz) {
   _Bool uspjesno = 0;
   int i, duljina = 0;

   while (*(niz + duljina) != '/0') {
      ++duljina;
   }
   if (poz >= 0 && poz <= duljina) {
      for (i = duljina; i >= poz; --i) {
         *(niz + i + 1) = *(niz + i);
      }
      *(niz + poz) = z;
      uspjesno = 1;
   }
   return uspjesno;
}

int main(void) {
   char niz[MAX + 1];
   char znak, poz;

   printf("Upisite niz > ");
   fgets(niz, MAX_NIZ + 1, stdin);

   printf("Upisite znak > ");
   scanf("%c", &znak);

   printf("Upisite poziciju > ");
   scanf("%c", &poz);

   izbaciNR(niz);

   if (umetniZnak(niz, poz, znak)) {
      printf("%s", niz);
   } else {
      printf("Neispravna pozicija");
   }

   return 0;
}