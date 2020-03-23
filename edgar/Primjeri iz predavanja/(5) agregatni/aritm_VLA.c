#include <stdio.h>

int main(void) {

   int n, suma = 0, i;
   float sredina;

   scanf("%d", &n);

   int brojevi[n];

   for (i = 0; i < n; i = i + 1) {
      scanf("%d", &brojevi[i]);
      suma = suma + brojevi[i];
   }
   sredina = 1.f * suma / n;

   printf("sredina = %f\n", sredina);
   for (i = 0; i < n; i = i + 1) {
      if (brojevi[i] > sredina) {
         printf("%d\n", brojevi[i]);
      }
   }
   return 0;
}