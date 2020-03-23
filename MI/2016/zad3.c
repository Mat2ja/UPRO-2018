#include <stdio.h>

int main(void) {
   int i, j;
   int polje[5][10];
   int suma = 0;
   int najveci;

   printf("Upisite clanove polja:\n");

   for (i = 0; i < 5; ++i) {
      for (j = 0; j < 10; ++j) {
         scanf("%d", &polje[i][j]);
      }
   }

   printf("Indeksi stupaca:\n");

   for (j = 1; j < 10; ++j) {
      suma = polje[0][j - 1];
      najveci = polje[0][j];
      for (i = 1; i < 5; ++i) {
         suma += polje[i][j - 1];
         if (polje[i][j] > najveci) {
            najveci = polje[i][j];
         }
      }
      if (najveci == suma) {
         printf("%d\n", j);
      }
   }

   return 0;
}
