#include <stdio.h>
#include <string.h>

int main(void) {
   char naslov[60 + 1], zanr[8 + 1];
   int godina;

   FILE *ulTok = fopen("filmovi.txt", "r");
   FILE *dramaTok = fopen("drama.txt", "w");
   FILE *sfTok = fopen("SF.txt", "w");
   FILE *komedijaTok = fopen("komedija.txt", "w");
   FILE *izlTok = NULL;

   while (fscanf(ulTok, " %[^|]|%[^|]|%d", naslov, zanr, &godina) == 3) {
      if (strcmp(zanr, "drama") == 0) {
         izlTok = dramaTok;
      } else if (strcmp(zanr, "SF") == 0) {
         izlTok = sfTok;
      } else {
         izlTok = komedijaTok;
      }
      fprintf(izlTok, "%s, %d\n", naslov, godina);
   }

   fclose(ulTok);
   fclose(dramaTok);
   fclose(sfTok);
   fclose(komedijaTok);

   return 0;
}