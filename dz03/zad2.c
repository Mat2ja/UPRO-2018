#include <stdio.h>
#include <math.h>
#define PI 3.14159265359f

int main(void) {
   printf("Upisite radijus kugle > ");
   float r, V;
   scanf("%f", &r);
   
   V = 4.f/3 * PI * r * r * r;
   
   if ( r > 0.f ) {
      printf("Volumen kugle radijusa %.3f je %.3f", r, V);
   }
   else {
      printf("Neispravan radijus kugle");
   }
   return 0;
}