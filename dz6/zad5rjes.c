#include <stdio.h>

int main(void) {
   int n, i, znamenka, dekadski = 0;

   scanf("%d", &n);

   if (n < 1 || n > 31) {
      printf("Broj znamenki je neispravan");
   } else {
      for (i = 0; i < n; i = i + 1) {
         scanf("%d", &znamenka);
         dekadski = dekadski * 2 + znamenka;
      }
      printf("= %d", dekadski);
   }

   return 0;
}