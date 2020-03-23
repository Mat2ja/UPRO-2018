#include <stdio.h>
#define MAX_NIZ 20

void brojiVelikaMala(char *niz, int *brV, int *brM) {
   *brV = *brM = 0;

   while (*niz != '\0') {
      if (*niz >= 'A' && *niz <= 'Z') {
         ++*brV;
      } else if (*niz >= 'a' && *niz <= 'z') {
         ++*brM;
      }
      ++niz;
   }
   return;
}

int main(void) {
   char niz[MAX_NIZ + 1];

   printf("Upisite niz > ");
   fgets(niz, MAX_NIZ + 1, stdin);

   int velika, mala;

   brojiVelikaMala(niz, &velika, &mala);
   printf("Velikih: %d\n", velika);
   printf("Malih: %d\n", mala);

   return 0;
}
