#include <stdio.h>
#include <math.h>
double fakt(int n) {
   int i;
   double f;
   for (i = 1, f = 1; i <= n; i++) {
      f *= i;
   }
   return f;
}
double pot(double x, int y) {
   double rez;
   int n;
   for (rez = 1, n = 1; n <= y; n++) {
      rez *= x;
   }
   return rez;
}
double sinus(double x) {
   int n;
   double suma, prethodnaSuma;
   prethodnaSuma = suma = 0;
   n = 0;
   while (1) {
      suma += pot(-1, n) / fakt(2 * n + 1) * pot(x, 2 * n + 1);
      if (suma == prethodnaSuma) break;
      prethodnaSuma = suma;
      n++;
   }
   return suma;
}
int main(void) {
   printf ("%g %g", sinus (1), sin(1));
}
