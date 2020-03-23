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

void izbaciSamoglase(char *niz) {
   int i = 0, potroseno = 0;

   while (*(niz + i) != '\0') {
      if (*(niz + i) != 'a' && *(niz + i) != 'A' && *(niz + i) != 'e' &&
          *(niz + i) != 'E' && *(niz + i) != 'i' && *(niz + i) != 'I' &&
          *(niz + i) != 'o' && *(niz + i) != 'O' && *(niz + i) != 'u' &&
          *(niz + i) != 'U') {
         *(niz + potroseno++) = *(niz + i);
      }
      ++i;
   }
   *(niz + potroseno) = '\0'; // <-- OVO JE VAZNO!
   return;
}

int main(void) {
   char niz[MAX + 1];

   printf("Upisite niz > ");
   fgets(niz, MAX + 1, stdin);

   izbaciNR(niz);
   izbaciSamoglase(niz);

   printf("%s", niz);

   return 0;
}