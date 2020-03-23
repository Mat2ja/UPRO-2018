#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void) {
   int brojac = 0, prvi, sljedeci;
   //srand(time(NULL));
   prvi = rand();
   while (1) {
      sljedeci = rand();
      brojac++;
      if (sljedeci == prvi) break;
   }
   printf ("%d %d\n", prvi, brojac);
   return 0;
}
