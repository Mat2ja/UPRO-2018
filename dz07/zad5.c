#include <stdio.h>

int main(void) {
   int predznakPrethKorak = 0; // -1, 1 ovisno o predznaku u prethodnom koraku
   int ispravanUnos;           // 1 ispravan, 0 neispravan unos novog broja
   int suma = 0;
   int novi; // novi ucitani broj

   do {
      scanf("%d", &novi);
      if ((predznakPrethKorak == 0 && novi != 0) ||
          predznakPrethKorak * novi < 0) {
         ispravanUnos = 1;
         suma += novi;
         if (novi > 0) {
            predznakPrethKorak = 1;
         } else if (novi < 0) {
            predznakPrethKorak = -1;
         }
      } else {
         ispravanUnos = 0;
      }
   } while (ispravanUnos == 1);

   printf("suma = %d", suma);

   return 0;
}