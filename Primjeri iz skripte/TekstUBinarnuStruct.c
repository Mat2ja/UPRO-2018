#include <stdio.h>
#include <stdlib.h>
#define MAX 16
int main(void) {
   FILE *fi, *fo;
   struct osoba {
      int sifra;
      char ime[MAX];
      char prezime[MAX];
      int tezina;
   } o;     
   fi = fopen("osobe.txt", "r");
   fo = fopen("osobe.bin", "wb");
   while (fscanf(fi, "%d %s %s %d", &o.sifra, o.ime, o.prezime, &o.tezina) == 4) {
      fseek(fo, (o.sifra-1L) * sizeof(o), SEEK_SET);
      fwrite(&o, sizeof(o), 1, fo);
   }
   fclose(fo);
   return EXIT_SUCCESS;   
}