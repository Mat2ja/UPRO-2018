#include <math.h>
#include <stdio.h>

int main(void) {
   float a, b, novi_a, novi_b;
   int i, n;

   printf("Upisite a, b i n: ");
   scanf("%f %f %d", &a, &b, &n);

   for (i = 2; i <= n; ++i) {
      novi_a = (a + b) / 2;
      novi_b = sqrt(a * b);
      printf("A(%d)=%9.4f B(%d)=%9.4f\n", i, novi_a, i, novi_b);
      a = novi_a;
      b = novi_b;
   }

   return 0;
}