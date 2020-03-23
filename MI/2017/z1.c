#include <stdio.h>
#define MAX 100

int main(void) {
   char ulaz[MAX + 1];
   char izlaz[MAX + 1];
   int i = 0;
   int j = 0;
   int broj_znakova = 0;

   printf("Upisati ulaz: ");
   fgets(ulaz, MAX + 1, stdin);

   // zamjena novog retka s nul retkom
   while (ulaz[i] != '\0') {
      if (ulaz[i] == '\n') {
         ulaz[i] = '\0';
      }
      i = i + 1;
   }
   i = 0;

   while (ulaz[i] != '\0') {
      broj_znakova = broj_znakova + 1;
      i = i + 1;
   }

   if (broj_znakova % 2 == 0 && broj_znakova > 0) {
      for (i = 0; i < broj_znakova; i = i + 2) {
         if ((ulaz[i] >= 'a' && ulaz[i] <= 'z') ||
             (ulaz[i + 1] >= 'a' && ulaz[i + 1] <= 'z')) {
            izlaz[j] = 'X';
            j = j + 1;
         } else {
            izlaz[j] = ulaz[i];
            izlaz[j + 1] = ulaz[i + 1];
            j = j + 2;
         }
      }
      izlaz[j] = '\0';
      printf("Izlazni ulaz: %s", izlaz);
   }
   return 0;
}