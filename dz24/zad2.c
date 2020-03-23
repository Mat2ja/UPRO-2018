#include <stdio.h>

int main(void) {
   float ucitan;
   int rez;

   do {
      rez = scanf("%f", &ucitan) == 1);
      if (rez == 1) {
         printf("%6.2f", ucitan);
      } else if (rez == EOF) {
         fprintf(stderr, "Oznaka kraja datoteke");
      } else {
         fprintf(stderr, "Greska kod znaka %c", getchar());
      }
   } while (rez == 1);

   return 0;
}