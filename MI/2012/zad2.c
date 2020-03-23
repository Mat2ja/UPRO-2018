#include <stdio.h>
#define MAX 50

int main() {
   int i, n, b1, b2, polje[MAX * 2], maxZbroj = 0;
   /*Ucitavaj broj dok se ne unese ispravna vrijednost*/
   do {
      printf("\nUnesite broj parova iz intervala [1,50]: ");
      scanf("%d", &n);
   } while (n < 1 || n > MAX);
   /*Ucitaj n parova brojeva*/
   for (i = 0; i < n; i++) {
      printf("\nUnesite %d. par cijelih brojeva: ", i + 1);
      scanf("%d %d", &b1, &b2);
      polje[i * 2] = b1;
      polje[i * 2 + 1] = b2;
      /*Alternativno*/
      /*scanf("%d %d", &polje[i*2], &polje[i*2+1]);*/
      /*Izracunaj zbroj prvog i drugog clana
      i usporedi ga s maksimalnim zbrojem*/
      if (i == 0) {
         /*Prvi par - pretpostavljamo da je
         razlika prvog para najveca*/
         maxZbroj = b1 + b2;
      } else if (b1 + b2 > maxZbroj) {
         maxZbroj = b1 + b2;
      }
   }
   /*Ispisi sve parove koji imaju maksimalnu razliku*/
   for (i = 0; i < n; i++) {
      if (polje[i * 2] + polje[i * 2 + 1] == maxZbroj) {
         printf("(%d,%d)\n", polje[i * 2], polje[i * 2 + 1]);
      }
   }
   return 0;
}