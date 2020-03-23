#include <stdio.h>

int main(void) {
   int n, i, znamenka, oktalni = 0;

   scanf("%d", &n);

   if (n < 1 || n > 10) {
      printf("Broj znamenki je neispravan");
   } else {
      for (i = 0; i < n; i = i + 1) {
         scanf("%d", &znamenka);
         oktalni = oktalni * 8 + znamenka;
      }
      printf("= %d", oktalni);
   }
   return 0;
}