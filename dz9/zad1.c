#include <stdio.h>

int main(void) {
   int i, j;
   float polje[5][7] = {{[5] = 0.9f},
                        {0.f},
                        {31.1f, 32.2f, 33.3f, 34.2f},
                        {1.0f, 4.0f, [6] = 7.7f}};

   for (i = 0; i < 5; i++) {
      for (j = 0; j < 7; j++) {
         printf("%5.1f", polje[i][j]);
      }
      printf("\n");
   }
   return 0;
}
