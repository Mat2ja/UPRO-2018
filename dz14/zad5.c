#include <stdio.h>

void tablica(int redaka, int stupaca) {
   int i, j;

   // ispisi prvi red: "zaglavlje" tablice
   printf("     ");

   for (j = 1; j <= stupaca; ++j)
      printf("%5d", j);
   printf("\n");

   // ispisi tablicu
   for (i = 1; i <= redaka; ++i) {
      // na pocetku svakog retka ispisi redni broj retka
      printf("%5d", i);

      for (j = 1; j <= stupaca; ++j) {
         printf("%5d", i * j);
      }
      printf("\n");
   }
}

int main(void) {
   int m, n;

   printf("Upisite broj redaka i stupaca > ");
   scanf("%d %d", &m, &n);
   tablica(m, n);

   return 0;
}