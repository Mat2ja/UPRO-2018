#include <stdio.h>

int main(void) {
   int a, b;

   printf("Upisite dva cijela broja > ");
   scanf("%d %d", &a, &b);

   if (a == b) {
      printf("Brojevi su jednaki\na = b = %d", a);
   } else if (a > b) {
	  printf("Zamjena je obavljena\na = %d, b = %d", b, a);
   } else {
      printf("Zamjena nije obavljena\na = %d, b = %d", a, b);
   }
   return 0;
}
