#include <stdio.h>

int main(void) {
   int n;
   int niz[n];
   int i;
   int indMin = 0, indMax = 0;
   int min, max, rez;

   printf("Unesite duljinu niza > ");
   scanf("%d", &n);

   printf("Unesite niz duljine %d:\n", n);

   for (i = 0; i < n; i++) {
      scanf("%d", &niz[i]);
   }

   for (i = 1; i < n; i++) {
      if (niz[i] < niz[indMin]) {
         indMin = i;
      }
      if (niz[i] > niz[indMax]) {
         indMax = i;
      }
   }

   min = niz[indMin];
   max = niz[indMax];

   rez = max - min;

   printf("Razlika najveceg i najmanjeg clana je %d.", rez);

   return 0;
}