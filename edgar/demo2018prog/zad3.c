#include <stdio.h>

int main(void) {
   int x;

   printf("Unesite broj > ");
   scanf("%d", &x);

   if (x >= 1 && x < 100) {
      printf("je");
   } else {
      printf("nije");
   }
   return 0;
}