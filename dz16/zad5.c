#include <math.h>
#include <stdio.h>

void korijeni(unsigned int n, double *x2, double *x3, double *x3) {

   *x2 = pow(n, 1. / 2.);
   *x3 = pow(n, 1. / 3.);
   *x5 = pow(n, 1. / 5.);

   return;
}

int main(void) {
   unsigned int n;
   double a, b, c;

   printf("Upisite nenegativni cijeli broj > ");
   scanf("%u", &n);
   korijeni(n, &a, &b, &c);
   printf("Rezultati su:\n%.8lf\n%.8lf\n%.8lf", a, b, c);

   return 0;
}