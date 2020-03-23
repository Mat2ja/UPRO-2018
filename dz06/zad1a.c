#include <stdio.h>

int main(void) {
   int i;
   float suma = 0.f;

   for (i = 1; i <= 1000; i = i + 1) {
      if (i % 2 == 1) {
         suma = suma + 1.f / i;
      } else {
         suma = suma - 1.f / i;
      }
   }

   printf("Suma je: %f\n", suma);

   return 0;
}