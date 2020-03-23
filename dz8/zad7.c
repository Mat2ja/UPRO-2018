#include <stdio.h>

#define VEL_INTERV 100
#define BROJ_INTERV 200
#define DONJA_GR 1

int main(void) {
   int brojac[BROJ_INTERV] = {0};
   int broj;

   printf("Upisite brojeve [%d, %d] > ", DONJA_GR, VEL_INTERV * BROJ_INTERV);

   do {
      scanf("%d", &broj);
      if (broj >= DONJA_GR && broj <= VEL_INTERV * BROJ_INTERV) {
         brojac[(broj - 1) / VEL_INTERV] = brojac[(broj - 1) / VEL_INTERV] + 1;
      }
   } while (broj >= DONJA_GR && broj <= VEL_INTERV * BROJ_INTERV);

   int i, najvecaFrekvencija = brojac[0];

   for (i = 1; i < BROJ_INTERV; i = i + 1) {
      if (brojac[i] > najvecaFrekvencija) {
         najvecaFrekvencija = brojac[i];
      }
   }

   for (i = 0; i < BROJ_INTERV; i = i + 1) {
      if (brojac[i] == najvecaFrekvencija) {
         printf("[%d, %d]: %d\n", i * VEL_INTERV + 1, (i + 1) * VEL_INTERV,
                brojac[i]);
      }
   }

   return 0;
}