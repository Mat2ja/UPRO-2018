#include <stdio.h>
#include <math.h>
int main(void) {
   double d;
      while (fscanf(stdin, "%lf", &d) == 1) {
      if (d >= 0) {
         fprintf(stdout, "sqrt(%g)=%g\n", d, sqrt(d));
      } else {
         fprintf(stderr, "%g je negativan\n", d);
      }
   }
   return 0;   
}