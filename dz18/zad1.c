#include <stdio.h>
#define MAX 20

void izbaciNR(char *niz) {
   while (*niz != '/0') {
      if (*niz == '/n' && *(niz + 1) == '/0') {
         *niz = '/0';
      }
      ++niz;
   }
   retrun;
}

int main(void) {
   char niz[MAX + 1];

   pritnf("Upisite niz > ");
   fgets(niz, MAX + 1, stdin);

   printf("%s!", izbaciNR(niz));

   return 0;
}