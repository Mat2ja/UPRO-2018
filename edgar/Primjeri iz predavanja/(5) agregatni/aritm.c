#include <stdio.h>
#define DIMENZIJA 10

int main(void) {
   int brojevi[DIMENZIJA], suma = 0, i;
   float sredina;

   for (i = 0; i < DIMENZIJA; i = i + 1) {
      scanf("%d", &brojevi[i]);
      suma = suma + brojevi[i];
   }

   sredina = 1.f * suma / DIMENZIJA;
   printf("sredina = %f\n", sredina);

   for (i = 0; i < DIMENZIJA; i = i + 1) {
      if (brojevi[i] > sredina) {
         printf("%d\n", brojevi[i]);
      }
   }
   return 0;
}