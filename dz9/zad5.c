#include <stdio.h>
#define RED 11

int main(void) {
   int i, j;
   int matrica[RED][RED];

   for (i = 0; i < RED; i = i + 1) {
      for (j = 0; j < RED; j = j + 1) {
         if (i == j || i == RED - 1 - j || j == 0 || i == 0 || j == RED - 1 ||
             i == RED - 1) {
            matrica[i][j] = 1;
         } else {
            matrica[i][j] = 8;
         }
      }
   }

   printf("Generirana kvadratna matrica:\n");

   for (i = 0; i < RED; i = i + 1) {
      for (j = 0; j < RED; j = j + 1) {
         printf("%2d", matrica[i][j]);
      }
      printf("\n");
   }

   return 0;
}