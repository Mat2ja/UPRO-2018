#include <stdio.h>

int main(void) {
   int n;
   int polje[n];
   int i, j;
   int ind_min;
   int pomocna;

   for (i = 0; i < n - 1; i = i + 1) {
      /* trazi indeks najmanjeg medju polje[i+1] ... polje[n-1] */
      ind_min = i + 1;
      for (j = i + 2; j < n; j = j + 1) {
         if (polje[j] < polje[ind_min])
            ind_min = j;
      }
      /* u ind_min se sada nalazi indeks najmanjeg clana */
      if (polje[ind_min] < polje[i]) {
         /* obavi zamjenu clanova polje[i] i polje[ind_min] */
         pomocna = polje[i];
         polje[i] = polje[ind_min];
         polje[ind_min] = pomocna;
      }
   }
   return 0;
}