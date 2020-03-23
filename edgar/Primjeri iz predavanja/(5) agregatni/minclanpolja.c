#include <stdio.h>

int main(void) {
   int n;
   int broj[n] = {0};
   int i;
   int min_indeks = 0;

   printf("Upisite velicinu polja > ");
   scanf("%d", &n);

   for (i = 0; i < n; i++) {
      printf("Upisite clanove polja > ");
      scanf("&d", &broj[i]);
   }

   for (i = 1; i < n; i++) {
      if (broj[i] < broj[min_indeks]) {
         min_indeks = i; // promijeni pretpostavku
      }
   }
   printf("Vrijednost %d na poziciji %d\n", polje[min_indeks], min_indeks);
   return 0;
}