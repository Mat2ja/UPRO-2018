#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>
#define fComplex(x) creal(x), cimag(x) > 0 ? '+' : '-', fabs(cimag(x))
int main(void) {
   double complex x1, x2;
   double a, b, c, d;
   scanf("%lf %lf %lf", &a, &b, &c);
   if (a == 0) {
      printf("Jednadžba nije kvadratna\n");
      return EXIT_FAILURE;
   } else {
      d = b * b - 4 * a * c;
      if (d == 0) {
         x1 =  - b / 2 * a + 0*I;
         x2 = x1;
      } else if (d > 0) {
         x1 = (-b + sqrt(d)) / (2 * a) + 0 * I;
         x2 = (-b - sqrt(d)) / (2 * a) + 0 * I;
      } else {
         x1 = - b / 2 * a + sqrt(-d) / 2 * a * I;
         x2 = - b / 2 * a - sqrt(-d) / 2 * a * I;
      }
   }
   printf("x1 = %g %c %gi, x2 = %g %c %gi", fComplex(x1), fComplex(x2));
   return EXIT_SUCCESS;
}
