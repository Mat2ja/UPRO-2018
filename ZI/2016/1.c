#include <stdio.h>

void popuniMatricu(char *m, int n, int max, int c_x, int c_y) {

   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
         if (i == c_x && j == c_y) {
            m[i * max + j] = 'X';
         } else if ((i < c_x && j < c_y) || (i > c_x && j > c_y)) {
            m[i * max + j] = '#';
         } else {
            m[i * max + j] = '-';
         }
      }
   }

   return;
}
