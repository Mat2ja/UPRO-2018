#include <stdio.h>
#include <string.h>

int main(void) {
   struct pred_s {
      int sifPred;
      char nazPred[40 + 1];
      int brStud;
   } predmet;

   int traziStud, sifStud, ocjena, sifPred;
   char ime[20 + 1], prez[20 + 1];

   printf("Upisite sifru > ");
   scanf("%d", &traziStud);

   FILE *ocjTok = fopen("ocjene.txt", "r");
   FILE *predTok = fopen("predmeti1.bin", "rb");

   _Bool pronadjeno = 0;

   while (fscanf(ocjTok, "%d %s %s %d %d", &sifStud, ime, prez, &sifPred,
                 &ocjena) == 5) {
      if (sifStud == traziStud) {
         if (pronadjeno == 0) {
            printf("%s %s je polozio/polozila:\n", ime, prez);
            pronadjeno = 1;
         }

         fseek(predTok, 0L, SEEK_SET);
         while (fread(&predmet, sizeof(predmet), 1, predTok) == 1) {
            if (predmet.sifPred == sifPred) {
               break;
            }
         }

         if (predmet.sifPred != sifPred) {
            strcpy(predmet.nazPred, "?");
         }
         printf("%s (%d)\n", predmet.nazPred, ocjena);
      }
   }

   if (!pronadjeno) {
      printf("Nema polozenih predmeta\n");
   }

   fclose(ocjTok);
   fclose(predTok);
   
   return 0;
}