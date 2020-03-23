#include <stdio.h>
#define MAX 1000

int main() {
   int i, duljina, indeks;
   char znak = '\0';
   char polje[MAX + 1];

   /*Ucitaj pocetni niz*/
   gets(polje);

   /*Izracunaj duljinu pocetnog niza*/
   while (polje[duljina] != '\0') {
      duljina++;
   }

   /*Ispisi niz*/
   printf("Trenutni niz: %s\n", polje);

   /*Dok je duljina niza manja od maksimalne...*/
   while (duljina < MAX) {
      /*Ucitaj par "pozicija, znak"*/
      printf("Unesite par pozicija, znak:\n");
      scanf("%d %c", &indeks, &znak);

      /*Provjera je li zadana pozicija unutar trenutnog niza*/
      if (indeks >= duljina) {
         /*Pozicija je izvan trenutnog niza*/
         break;
      }

      /*Premjesti znakove od kraja niza do znaka na
      poziciji "pozicija" jedno mjesto unatrag*/
      for (i = duljina; i >= indeks; i--) {
         polje[i + 1] = polje[i];
      }

      /*Umetni zadani znak na zadanu poziciju*/
      polje[indeks] = znak;

      /*Uvecaj duljinu za 1*/
      duljina++;

         /*Ispisi niz*/
      printf("Trenutni niz: %s\n", polje);
   }

   return 0;
}