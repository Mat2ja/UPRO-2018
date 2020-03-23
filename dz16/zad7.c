#include <stdio.h>

void zamijeni(double *x, double *y) {
   double pom;

   pom = *x;
   *x = *y;
   *y = pom;

   return;
}

void poredaj(double *p1, double *p2, double *p3) {

   if (*p1 > *p2) {
      zamijeni(p1, p2);
   }
   if (*p1 > *p3) {
      zamijeni(p1, p3);
   }
   if (*p2 > *p3) {
      zamijeni(p2, p3);
   }

   return;
}

int main(void) {
   double x, y, z;

   printf("Upisite tri realna broja > ");
   scanf("%lf %lf %lf", &x, &y, &z);

   poredaj(&x, &y, &z);

   printf("%lf %lf %lf", x, y, z);

   return 0;
}