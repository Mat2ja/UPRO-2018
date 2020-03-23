#include <stdio.h>
#define MAX_NIZ 20

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
   printf("Niz: %s\n", niz);

   int samog = 0, sug = 0, ostali = 0;
   i = 0;
   while (niz[i] != '\0') {
      if (niz[i] == 'A' || niz[i] == 'E' || niz[i] == 'I' || niz[i] == 'O' ||
          niz[i] == 'U' || niz[i] == 'a' || niz[i] == 'e' || niz[i] == 'i' ||
          niz[i] == 'o' || niz[i] == 'u') {
         samog = samog + 1;
      } else if ((niz[i] >= 'A' && niz[i] <= 'Z') ||
                 (niz[i] >= 'a' && niz[i] <= 'z')) {
         sug = sug + 1;
      } else {
         ostali = ostali + 1;
      }
      i = i + 1;
   }
   printf("Samoglasnika: %d\n", samog);
   printf("Suglasnika: %d\n", sug);
   printf("Ostalih: %d\n", ostali);

   return 0;
}