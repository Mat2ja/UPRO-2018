#include <stdio.h>

int main(void) {
   struct pred_s {
      int sifPred;
      char nazPred[40 + 1];
      int brStud;
   } predmet;

   FILE *predTok = fopen("predmeti2.bin", "rb");

   while (fread(&predmet, sizeof(predmet), 1, predTok) == 1) {
      if (predmet.sifPred != 0) {
         printf("%d, %s, polozilo %d\n", predmet.sifPred, predmet.nazPred,
                predmet.brStud);
      }
   }

   fclose(predTok);

   return 0;
}