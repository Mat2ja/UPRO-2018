#include <stdio.h>
#include <math.h>
double sinus(double x) {
   int n;
   double suma, prethodnaSuma, clan;
   prethodnaSuma = suma = clan = x;
   n = 2;
   while (1) {
      clan = -clan * x * x / n / (n+1);
      suma += clan;
      if (suma == prethodnaSuma) break;
      prethodnaSuma = suma;
      n += 2;
   }
   return suma;
}
int main(void) {
   printf ("%g %g", sinus (1), sin(1));
}
