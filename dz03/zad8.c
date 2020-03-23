#include <stdio.h>

int main(void) {
   int a, b, c;
   
   printf("Upisite 3 cijela broja > ");
   scanf(" %d %d %d", &a, &b, &c);
   
   if ((a < b && b < c) || (a > b && b > c)) {
      printf("Brojevi su poredani i razliciti");
   } else {
      printf("Brojevi nisu poredani ili nisu razliciti");
   }
   return 0;
}