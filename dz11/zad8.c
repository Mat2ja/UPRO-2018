#include <stdio.h>
#define MAX_NIZ 100

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

   int duljina = 0;

   while (niz[duljina] != '\0') {
      duljina = duljina + 1;
   }

   int poz;
   printf("Upisite poziciju > ", &poz);
   scanf("%d", &poz);

   if (poz >= 1 && poz <= duljina) {
      /* Sve znakove od indeksa poz-1 do indeksa dulj
      posmaknuti za jedan u lijevo. Uocite, posmaknut ce se
      i \0, tako da ce niz na kraju biti kraci za jedan znak */
      for (i = poz - 1; i < duljina; i = i + 1) {
         niz[i] = niz[i + 1];
      }
      printf("%s", niz);
   } else {
      printf("Neispravna pozicija");
   }

   return 0;
}