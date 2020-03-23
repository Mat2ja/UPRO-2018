#include <stdio.h>

int main(void) {
   struct pred_s {
      int sifPred;
      char nazPred[40 + 1];
      int brStud;
   } predmet;

   predmet.brStud = 0; // za sada postaviti na 0

   FILE *ulaz = fopen("predmeti.txt", "r");
   FILE *izlaz1 = fopen("predmeti1.bin", "wb");
   FILE *izlaz2 = fopen("predmeti2.bin", "wb");

   while (fscanf(ulaz, "%d %[^\n]", &predmet.sifPred, predmet.nazPred) == 2) {
      fwrite(&predmet, sizeof(predmet), 1, izlaz1);
      fseek(izlaz2, (long)(predmet.sifPred - 1000 - 1) * sizeof(predmet),
            SEEK_SET);
      fwrite(&predmet, sizeof(predmet), 1, izlaz2);
   }

   fclose(ulaz);
   fclose(izlaz1);
   fclose(izlaz2);

   return 0;
}
