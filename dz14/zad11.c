#include <math.h>
#include <stdio.h>

unsigned long long fakt(unsigned int n) {
   unsigned int i;
   unsigned long long umnozak = 1ULL;

   for (i = 2U; i <= n; ++i)
      umnozak = umnozak * i;
   return umnozak;
}

double sinus(double x, unsigned int n) {
   unsigned int i;
   int predznak = 1;
   double clan, suma = 0.;

   for (i = 1U; i <= n; ++i) {
      clan = predznak * pow(x, 2 * i - 1) / fakt(2 * i - 1);
      suma = suma + clan;

      // priprema predznaka za sljedeci korak
      predznak = -predznak;
   }
   return suma;
}

int main(void) {
   double x;
   unsigned int n;
   double rezSin, rezSinus;

   printf("Upisite x i n > ");
   scanf("%lf %u", &x, &n);

   rezSinus = sinus(x, n);
   rezSin = sin(x);

   printf("sinus(%.15lf) = %.15lf\n", x, rezSinus);
   printf(" sin(%.15lf) = %.15lf\n", x, rezSin);
   printf(" razlika = %.15lf", rezSinus - rezSin);

   return 0;
}  