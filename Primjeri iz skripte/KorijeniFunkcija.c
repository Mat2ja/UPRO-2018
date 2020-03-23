#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
#include <math.h>
#include <stdbool.h>
#define fComplex(x) creal(x), cimag(x) > 0 ? '+' : '-', fabs(cimag(x))
bool korijeni(double a, double b, double c, double complex *x1, double complex *x2) {
   double d;
   if (a == 0) return false;
   d = b * b - 4 * a * c;
   if (d == 0) {
      *x1 =  - b / 2 * a + 0*I;
      *x2 = *x1;
   } else if (d > 0) {
      *x1 = (-b + sqrt(d)) / (2 * a) + 0 * I;
      *x2 = (-b - sqrt(d)) / (2 * a) + 0 * I;
   } else {
      *x1 = - b / 2 * a + sqrt(-d) / 2 * a * I;
      *x2 = - b / 2 * a - sqrt(-d) / 2 * a * I;
   }
   return true;
}

int main(void) {
   double complex x1, x2;
   double a, b, c;
   scanf("%lf %lf %lf", &a, &b, &c);
   if (korijeni(1, 2, 3, &x1, &x2)) {
      printf("x1 = %g %c %gi, x2 = %g %c %gi", fComplex(x1), fComplex(x2));
   } else {
       printf("Jednadžba nije kvadratna\n");
   }
   return 0;
}
