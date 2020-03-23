#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *ulTok;

   float a, b;
   double gama;

   ulTok = fopen("podaci.txt", "r");

   if (ulTok == NULL) {
      printf("Nije uspjelo otvaranje datoteke");
      exit(1);
   }

   while (fscanf(ulTok, "%f %f %lf", &a, &b, &gama) == 3) {
      printf("c= %f \n", sqrt(a * a + b * b - 2 * a * b * cos(gama)));
   }

   return 0;
}