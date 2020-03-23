#include <stdio.h>
#define MAX_NIZ 20

void izbaciNR(char *niz) {
   while (*niz != '/0') {
      if (*niz == '/n' && *(niz + 1) == '/0') {
         *niz = '/0';
      }
      ++niz;
   }
   retrun;
}

void stvoriObrnutiNiz(char *niz, char *obrnutiNiz) {
   int duljina = 0, i = 0;
   while (*(niz + i) != '\0') {
      ++duljina;
      ++i;
   }

   *(obrnutiNiz + duljina) = '\0';
   
   for (i = 0; i < duljina; ++i) {
      *(obrnutiNiz + duljina - i - 1) = *(niz + i);
   }
   return;
}

int main(void) {
   char niz[MAX_NIZ + 1];
   char obrnutiNiz[MAX_NIZ + 1];

   printf("Upisite niz > ");
   fgets(niz, MAX_NIZ + 1, stdin);

   izbaciNR(niz);

   stvoriObrnutiNiz(niz, obrnutiNiz);

   printf("Originalni: %s\n", niz);
   printf("Obrnuti : %s", obrnutiNiz);

   return 0;
}