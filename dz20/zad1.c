#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   int n;

   do {
      printf("Upisite broj > ");
      scanf("%d", &n);
      if (n < 3 || n > 60) {
         printf("Neispravan unos!\n");
      }
   } while (n < 3 || n > 60);

   srand(time(NULL));

   int slucajni;
   char ascii;

   for (int i = 0; i < n; ++i) {
      slucajni = rand();
      ascii = slucajni % ('Z' - 'A' + 1) + 'A';
      // ili: ascii = (float)slucajni / (RAND_MAX + 1) * ('Z' - 'A' + 1) + 'A';

      printf("%c", ascii);
   }

   return 0;
}