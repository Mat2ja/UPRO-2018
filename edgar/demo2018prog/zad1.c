#include <stdio.h>

int main(void) {
   float x;

   printf("Unesite broj > ");
   scanf("%f", &x);

   if (x >= -100.f && x < 1.f) {
      printf("je");
   } else {
      printf("nije");
   }
   return 0;
}