#include <math.h>
#include <stdio.h>

void genPrim(int granica, int n, int *rez) {
   _Bool djeljiv;
   int nadjenoBrojeva = 0, kandidat = granica > 1 ? granica : 2, i;

   while (nadjenoBrojeva < n) {
      i = 2;
      djeljiv = 0;

      while (i <= sqrt(kandidat) && djeljiv == 0) {
         if (kandidat % i == 0) {
            djeljiv = 1;
         }
         i = i + 1;
      }
      if (djeljiv == 0 || kandidat == 1) {
         *(rez + nadjenoBrojeva) = kandidat;
         ++nadjenoBrojeva;
      }
      ++kandidat;
   }
   return;
}

int main(void) {
   int dgr, n, i;

   printf("Upisite donju granicu i broj prim brojeva > ");
   scanf("%d %d", &dgr, &n);

   int primBrojevi[n];

   genPrim(dgr, n, &primBrojevi[0]);

   for (i = 0; i < n; ++i) {
      printf("%7d\n", primBrojevi[i]);
   }

   return 0;
}