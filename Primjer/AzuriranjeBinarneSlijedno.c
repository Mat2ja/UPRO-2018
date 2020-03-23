#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 16
int main(void) {
   FILE *fo;
   struct osoba {
      int sifra;
      char ime[MAX];
      char prezime[MAX];
      int tezina;
   } o;     
   int tezina, procitano;
   char ime[MAX], prezime[MAX];
   fo = fopen("osobe.bin", "r+b");
   while (1) {
      scanf("%s %s %d", ime, prezime, &tezina);
      if (strcmp(ime, "-") == 0) break;
      fseek(fo, 0L, SEEK_SET);
      while ((procitano = fread(&o, sizeof(o), 1, fo)) == 1) {
         if (strcmp(o.ime, ime) == 0 && strcmp(o.prezime, prezime) == 0) {
            o.tezina = tezina;
            fseek(fo, -sizeof(o), SEEK_SET);
            fwrite(&o, sizeof(o), 1, fo);
            break;
         }
      }
      if (procitano == 1) {
         printf("Ažurirani podaci za osobu %s %s\n", o.ime, o.prezime);
      } else {
         printf("Ne postoji osoba imenom %s %s\n", ime, prezime);
      }
   }
   fclose(fo);
   return EXIT_SUCCESS;   
}