#include <stdio.h>

int main(void) {
   int ucitan, brojac = 0, zbroj = 0;

   while (scanf("%d", &ucitan) == 1) { // 1 as if 1 podatak je ucitan
      zbroj += ucitan;
      ++brojac;
   }
   printf("Broj : %d\n", brojac);
   printf("Zbroj: %d\n", zbroj);

   return 0;
}