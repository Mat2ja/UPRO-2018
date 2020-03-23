#include <stdio.h>
#define MAX_NIZ 8

int main(void) {
   char znamenke[MAX_NIZ]; // 1-d polje obrnuto poredanih znamenki
   char niz[MAX_NIZ + 1];  // niz u koji ce se prepisati znamenke iz 1-d polja
   unsigned int broj;
   int broj_znamenki = 0;

   printf("Upisite dekadski broj > ");
   scanf("%u", &broj);

   if (broj == 0) {
      znamenke[0] = '0';
      broj_znamenki = broj_znamenki + 1;
   } else {
      int ostatak;
      while (broj != 0) {
         ostatak = broj % 16;
         broj = broj / 16;
         if (ostatak >= 10) {
            znamenke[broj_znamenki] = ostatak - 10 + 'A';
         } else {
            znamenke[broj_znamenki] = ostatak + '0';
         }
         broj_znamenki = broj_znamenki + 1;
      }
   }

   // prepisi polje znamenke u niz, obrnutim redom
   int i;
   for (i = 0; i < broj_znamenki; i = i + 1) {
      niz[i] = znamenke[broj_znamenki - i - 1];
   }

   // obavezno terminirati niz
   niz[broj_znamenki] = '\0';
   printf("Heksadekadski: %s", niz);

   return 0;
}