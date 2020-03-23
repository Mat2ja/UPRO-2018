#include <stdio.h>

int main(void) {
   float cels, fahr;
   int izbor;

   printf("Program za konverziju Fahrenheit - Celsius ili obrnuto.\n");
   printf("Za F u C upisite 1, a za C u F bilo koji drugi cijeli broj > ");
   scanf("%d", &izbor);

   if (izbor == 1) {
      printf("Upisite temperaturu izrazenu u stupnjevima Fahrenheit > ");
      scanf("%f", &fahr);
      cels = (fahr - 32) * 1.8f;
      printf("%8.3f st. F = %.3f st. C\n", fahr, cels);
   } else {
      printf("Upisite temperaturu izrazenu u stupnjevima Celsius > ");
      scanf("%f", &cels);
      fahr = cels * 1.8 + 32;
      printf("%8.3f st. C = %.3f st. F\n", cels, fahr);
   }
   return 0;
}
