#include <stdio.h>

#define N 4

int main(void) {
   char polje[N][N];

   for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
         scanf(" %c", &polje[i][j]);
      }
   }

   for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
         printf("%c", polje[i][j]);
      }
      printf("\n");
   }

   return 0;
}
