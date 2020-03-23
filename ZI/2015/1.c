#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXIGRACA 10

int simulirajIgru(int brIgraca, int brBodova, int *bodovi) {
   for (int i = 0; i < brIgraca; ++i) {
      bodovi[i] = 0;
   }

   while (1) {
      for (int i = 0; i < brIgraca; ++i) {
         bodovi[i] += (rand() % 6 + 1);

         if (bodovi[i] >= brBodova) {
            return i + 1;
         }
      }
   }
}

int main(void) {
   int brIgraca;
   int bodovi[MAXIGRACA];
   int pobjednik;

   srand((unsigned)time(NULL));

   do {
      printf("Upisite broj igraca (2-10): ");
      scanf("%d", &brIgraca);
   } while (brIgraca < 2 || brIgraca > MAXIGRACA);

   printf("Igra  Pobjednik  Bodovi igraca\n");

   for (int i = 0; i < 10; ++i) {
      pobjednik = simulirajIgru(brIgraca, 70, bodovi);

      printf("%2d.   Igrac %-2d   ", i + 1, pobjednik);

      for (int i = 0; i < brIgraca; ++i)
         printf("%d%c", bodovi[i], (i + 1) < brIgraca ? ',' : ' \n');
   }
   return 0;
}
