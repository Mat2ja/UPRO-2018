#include <math.h>
#include <stdio.h>
#define MAX 9

int main(void) {
   int i, duljina = 0, rez = 0;
   int samoZnamenke = 1;
   char niz[MAX + 1];

   printf("Unesite niz:\n");
   gets(niz);

   while (niz[duljina] != '\0') {
      if (niz[duljina] < '0' || niz[duljina] > '9') {
         samoZnamenke = 0;
         break;
      }
      ++duljina;
   }
   if (samoZnamenke) {
      for (i = 0; i < duljina; ++i) {
         rez = rez * 10 + (niz[i] - '0');
      }
      printf("%d, %.2f", rez, sqrt(rez)); /* ili pow umjesto sqrt */
   } else {
      printf("Dopustene samo dekadske znamenke.");
   }

   return 0;
}