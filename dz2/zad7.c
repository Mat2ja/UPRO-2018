#include <stdio.h>

int main(void) {
   int a, b, spasi_a;
   
   printf("Upisite 2 cijela broja > ");
   scanf("%d %d", &a, &b);
   
   spasi_a = a;
   a = b % 10;
   b = spasi_a % 10;
   
   printf("a = %d\nb = %d", a, b);
   
   return 0;
}
   