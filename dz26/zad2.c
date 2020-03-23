#include <stdio.h>

int main(void) {
   FILE *ulaz = fopen("brojevi.txt", "r");

   float broj;
   int brojac = 0;
   float suma = 0.f;

   while (fscanf(ulaz, "%f", &broj) == 1) {
      suma += broj;
      ++brojac;
   }

   if (brojac == 0) {
      printf("Nije ucitan nijedan broj");
   } else {
      printf("%f\n", suma / brojac);
   }

   fclose(ulaz);

   return 0;
}