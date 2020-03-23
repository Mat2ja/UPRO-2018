#include <stdio.h>
int main(void) {
   float a = 1.0f, gg;

   printf("Unesite gornju granicu za duljinu stranice kvadrata: ");
   scanf("%f", &gg);

   while ((a <= gg) && (a <= 10.0f)) {
      printf("a=%4.1f P=%4.2f\n", a, a * a);
      a = a + 0.5;
   }
   return 0;
}