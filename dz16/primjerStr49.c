#include <stdio.h>

float *vratiVeceg(float *px, float *py) {

   if (*px > *py)
      return px;
   else if (*py > *px)
      return py;
   else
      return NULL;
}

int main(void) {
   float a, b, *rez;

   printf("Upisite dva broja > ");
   scanf("%f %f", &a, &b);

   rez = vratiVeceg(&a, &b);

   if (rez == NULL)
      printf("Brojevi su jednaki");
   else
      printf("Veci broj je %f", *rez);

   return 0;
}