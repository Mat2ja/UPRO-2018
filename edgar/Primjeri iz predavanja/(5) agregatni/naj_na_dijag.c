#include <stdio.h>

#define RED_MATRICE 8

int main(void) {
   int i, j;
   float polje[RED_MATRICE][RED_MATRICE], min_gl, min_sp;

   printf("Upisite clanove polja >\n");

   for (i = 0; i < RED_MATRICE; i = i + 1) {
      for (j = 0; j < RED_MATRICE; j = j + 1) {
         scanf("%f", &polje[i][j]);
      }
   }

   /* pretpostavka: prvi clan glavne dijagonale je najmanji */
   min_gl = polje[0][0];

   /* provjeri ostale clanove glavne dijagonale */
   for (i = 1; i < RED_MATRICE; i = i + 1) {
      if (polje[i][i] < min_gl) {
         /* promijeni pretpostavku */
         min_gl = polje[i][i];
      }
   }

   /* pretpostavka: prvi clan sporedne dijagonale je najmanji */
   min_sp = polje[0][RED_MATRICE - 1];

   /* provjeri ostale clanove sporedne dijagonale */
   for (i = 1; i < RED_MATRICE; i = i + 1) {
      if (polje[i][RED_MATRICE - 1 - i] < min_sp) {
         /* promijeni pretpostavku */
         min_sp = polje[i][RED_MATRICE - 1 - i];
      }
   }

   printf("Najmanja vrijednost na glavnoj je %d", min_gl);
   printf("Najmanja vrijednost na sporednoj je %d", min_sp);

   return 0;
}