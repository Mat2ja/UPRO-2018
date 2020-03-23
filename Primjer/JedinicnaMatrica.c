#define VARIJANTA 3
#include <stdio.h>
#define MAX 10
int main(void) {
#if VARIJANTA == 1 || VARIJANTA == 2
   int m[MAX][MAX];
#else 
   int m[MAX][MAX] = {0};
#endif
   int i, j, n;
   scanf ("%d", &n);
#if VARIJANTA == 1
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         if (i == j) {
            m[i][j] = 1;
         } else {
            m[i][j] = 0;
         }
      }
   }
#else 
#if VARIJANTA == 2
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         m[i][j] = 1;
      }
   }   
#endif
   for (i = 0; i < n; i++) {
      m[i][i] = 1;
   }
#endif
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
         printf ("%d ", m[i][j]);
      }
      printf ("\n");
   }

   return 0;
}

