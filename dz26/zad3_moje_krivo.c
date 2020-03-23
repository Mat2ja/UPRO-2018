#include <stdio.h>
#include <string.h>

int main(void) {
   FILE *ulTok = fopen("osobe.txt", "r");

   struct osoba_s {
      int mbr;
      char ime[20 + 1];
      char prezime[20 + 1];
      char datum[10 + 1];
   } osoba;

   while (fscanf(ulTok, "%d %s %s %s", &osoba.mbr, osoba.ime, osoba.prezime,
                 osoba.datum) == 4) {
      if ((strpbrk(osoba.datum, "1987") != NULL) || // hmm??
          (strpbrk(osoba.ime, "na") != NULL)) {
         printf("%d %s %s\n", osoba.mbr, osoba.ime, osoba.prezime);
      }
   }

   fclose(ulTok);

   return 0;
}

// KRIVO!
// ISPISUJE SVE IZ DATOTEKE ??