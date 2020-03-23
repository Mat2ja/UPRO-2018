#include <stdio.h>

int main(void) {
   struct pretinac_s {
      int sifra;
      int sirina;
      int visina;
      int dubina;
      float volumen;
   };

   int n;

   printf("Upisite broj pretinaca > ");
   scanf("%d", &n);

   struct pretinac_s pretinci[n];

   printf("Upisite podatke za pretince (%d)\n", n);

   int i;

   for (i = 0; i < n; i = i + 1) {
      printf("%2d. pretinac > ", i + 1);
      scanf("%d %d %d %d", &pretinci[i].sifra, &pretinci[i].sirina,
            &pretinci[i].visina, &pretinci[i].dubina);
      pretinci[i].volumen = (float)pretinci[i].sirina * pretinci[i].visina *
                            pretinci[i].dubina / 1000;
   }

   int ind_max, j;
   struct pretinac_s pomocni;

   for (i = 0; i < n - 1; i = i + 1) {
      ind_max = i + 1;
      for (j = i + 2; j < n; j = j + 1) {
         if (pretinci[j].volumen > pretinci[ind_max].volumen)
            ind_max = j;
      }
      if (pretinci[ind_max].volumen > pretinci[i].volumen) {
         pomocni = pretinci[i];
         pretinci[i] = pretinci[ind_max];
         pretinci[ind_max] = pomocni;
      }
   }

   printf("Sortirani pretinci:\n");

   for (i = 0; i < n; i = i + 1) {
      printf("%d = %6.2f litara\n", pretinci[i].sifra, pretinci[i].volumen);
   }

   return 0;
}