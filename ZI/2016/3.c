#include <stdio.h>

int main(void) {
   struct osoba_s {
      int sifOsoba;
      char imePrez[20 + 1];
      float dohodak;
      float porez;
   } osoba;

   FILE *troskovi, *porezi;

   int sifOsoba, rbrZapis = 0, brojOsoba = 0;
   float trosak, prosjecniDohodak, sumaDohodaka = 0.f;
   char jedIdRac[17 + 1];

   troskovi = fopen("troskovi.txt", "r");
   porezi = fopen("porezi.bin", "r+b");

   while (fread(&osoba, sizeof(osoba), 1, porezi) == 1) {
      ++rbrZapis;
      if (osoba.sifOsoba == rbrZapis) { /* osoba s tom sifrom postoji */
         sumaDohodaka += osoba.dohodak;
         ++brojOsoba;
      }
   }
   prosjecniDohodak = sumaDohodaka / brojOsoba;

   while (fscanf(troskovi, "%d%s%f", &sifOsoba, jedIdRac, &trosak) == 3) {
      fseek(porezi, (long)(sifOsoba - 1) * sizeof(osoba), SEEK_SET);
      fread(&osoba, sizeof(osoba), 1, porezi);
      if (osoba.dohodak < prosjecniDohodak) {
         osoba.porez = osoba.porez >= trosak ? osoba.porez - trosak : 0.f;
         fseek(porezi, -(long)sizeof(osoba), SEEK_CUR);
         fwrite(&osoba, sizeof(osoba), 1, porezi);
      }
   }

   fclose(troskovi);
   fclose(porezi);

   return 0;
}