#include <stdio.h>
#include <stdlib.h>
#define MAX 16
int main(void) {
   FILE *fi, *fo;
   char ime[MAX], prezime[MAX];
   int sifra, tezina;
   fi = fopen("osobe.txt", "r");
   fo = fopen("osobe.bin", "wb");
   while (fscanf(fi, "%d %s %s %d", &sifra, ime, prezime, &tezina) == 4) {
      fwrite(&sifra, sizeof(sifra), 1, fo);
      fwrite(ime, sizeof(ime), 1, fo);
      fwrite(prezime, sizeof(prezime), 1, fo);
      fwrite(&tezina, sizeof(tezina), 1, fo);
   }
   fclose(fo);
   return EXIT_SUCCESS;   
}