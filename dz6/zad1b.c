#include <stdio.h>

int main(void) {
   int i = 1;
   float suma = 0.f;

   while (i <= 1000) {
      if (i % 2 == 1) {
         suma = suma + 1.f / i;
      } else {
         suma = suma - 1.f / i;
      }
      i = i + 1;
   }

   printf("Suma je: %f\n", suma);

   return 0;
}