#include <stdio.h>

int main(void) {
   FILE *tokPodaci = fopen("zivotinjsko_carstvo.bin", "r+b");
   FILE *tokNove = fopen("nove_slicice.txt", "r");

   struct podaci_s {
      short redBr;
      char ime[50 + 1];
      int prikupljeneS;
   } podatak;

   int redniBroj;
   int noveS;

   while (fscanf(tokNove, "%3hd#[^\n]", &redniBroj, &noveS) == 2) {
      fseek(tokPodaci, (long)(redniBroj - 1) * sizeof(podatak), SEEK_SET);
      fread(&podatak, sizeof(podatak), 1, tokPodaci);
      podatak.prikupljeneS += noveS;
      fseek(tokPodaci, -1L * sizeof(podatak), SEEK_CUR);
      fwrite(&podaci, sizeof(podatak), 1, tokPodaci);
   }

   fclose(tokPOdaci);
   fclose(tokNove);

   return 0;
}