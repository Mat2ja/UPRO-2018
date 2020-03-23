#include <stdio.h>

#define MAX 100

int main(void) {
   int dan, mjesec;
   int matBroj, matBrojevi[MAX], godine[MAX];
   int brojUcitanih = 0, i;
   char tocka;

   do {
      scanf("%d", &matBroj);
      if (matBroj != 0) {
         matBrojevi[brojUcitanih] = matBroj;
         scanf("%d%c%d%c%d", &dan, &tocka, &mjesec, &tocka,
               &godine[brojUcitanih]);
         ++brojUcitanih;
      }
   } while (matBroj != 0);

   for (i = 0; i < brojUcitanih; ++i) {
      printf("%4d. %4d.\n", matBrojevi[i], godine[i]);
   }
   printf("\n");

   return 0;
}