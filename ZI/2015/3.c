#include <stdio.h>

int main(void) {
   FILE *mjestaTok = fopen("mMjesta.bin", "r+b");
   FILE *mjerenjaTok = fopen("mjerenja.txt", "r");

   struct mjesto_s {
      int sifra;
      char grad[20 + 1];
      int brojMjerenja;
   } mjesto;

   int godinaM;
   float temperaturaM;

   while (fscanf(mjerenjaTok, "%d#%*2d%*2d%4d#%f", &mjesto.sifra, &godinaM,
                 &temperaturaM) == 3) {
      if (godinaM == 2014) {
         fseek(mjestaTok, (long)(mjesto.sifra - 1) * sizeof(mjesto), SEEK_SET);
         fread(&mjesto, sizeof(mjesto), 1, mjestaTok);
         ++mjesto.brojMjerenja;
         fseek(mjestaTok, -1L * sizeof(mjesto), SEEK_CUR);
         fwrite(&mjesto, sizeof(mjesto), 1, mjestaTok);
      }
   }

   fclose(mjestaTok);
   fclose(mjerenjaTok);

   return 0;
}

// skoro sam sam rjesio, pazit na fread i fwrite i fseek!!