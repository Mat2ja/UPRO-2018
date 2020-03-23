#include <stdio.h>

int main(void) {
   FILE *tokOsoba = fopen("osoba.bin", "rb");
   FILE *tokKandidat = fopen("kandidat.txt", "r");

   struct osoba_s {
      int sifra;
      char imePrez[40 + 1];
      float prosjek;
   } osoba;

   float najveciProsjek = 0.f;

   while (fread(&osoba, sizeof(osoba), 1, tokOsoba)) {
      if (osoba.prosjek > najveciProsjek) {
         najveciProsjek = osoba.prosjek;
      }
   }

   while (fscanf(tokKandidat, "%d", &osoba.sifra)) {
      fseek(tokOsoba, (long)(osoba.sifra - 1) * sizeof(osoba), SEEK_SET);
      fread(&osoba, sizeof(osoba), 1, tokOsoba) {
         if (osoba.prosjek == najveciProsjek) {
            printf("%d &s\n", osoba.sifra, osoba.imePrez);
         }
      }
   }

   fclose(tokOsoba);
   fclose(tokKandidat);

   return 0;
}