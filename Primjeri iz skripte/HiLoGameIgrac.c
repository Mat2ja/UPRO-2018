#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randOdDoInt(int odg, int dog) {
   return rand() / (RAND_MAX + 1.) * (dog - odg + 1) + odg;
}

int main (void) {
   int brojac = 0, zamisljeni, broj, dg, gg;

   srand(time(NULL));  // inicijalizacija generatora
   printf("Unijeti donju i gornju granicu:");

   do {
      scanf("%d %d", &dg, &gg);
   } while (dg >= gg);  // učitavanje se ponavlja ako su nelogične granice

   zamisljeni = randOdDoInt(dg, gg);

   while (1) {
      printf("Unijeti broj:");
      scanf ("%d", &broj);
      brojac++;

      if (broj == zamisljeni) {
         break;
      } else if (broj < zamisljeni) {
         printf ("Broj je manji od zamišljenog\n");
      } else {
         printf ("Broj je veći od zamišljenog\n");
      }
   }

   printf ("Zamišljeni broj pogođen je u %d pokušaja\n", brojac);
   
   return 0;
}
