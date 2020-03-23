#include <stdio.h>
#include <string.h>

#define MAXPATH 100

int brojiSamoglasnike(char *imeDatoteke) {
   FILE *ulTok = fopen(imeDatoteke, "r");

   int c;
   int brojac = 0;

   if (ulTok == NULL) {
      return -1;
   } else {
      while ((c = getc(ulTok)) != EOF) {
         c = toupper(c);
         if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            ++brojac;
         } // pazit na konverzije char & int !!!!!
      }
      fclose(ulTok);
   }
   return brojac;
}

int main(void) {
   char kompletanPut[MAXPATH + 1];

   printf("Upisite kompletan put do datoteke > ");
   scanf("%s", kompletanPut);

   int brojSamogl = brojiSamoglasnike(kompletanPut);

   if (brojSamogl == -1) {
      printf("Nije uspjelo otvaranje datoteke %s", kompletanPut);
   } else {
      printf("Broj samoglasnika u datoteci %s je %d", kompletanPut, brojSamogl);
   }

   return 0;
}