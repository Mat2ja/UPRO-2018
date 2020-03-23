#include "putanja.h"
#include <stdio.h>
#include <stdlib.h>

void inicijalizirajPolje(char *polje, int n) {
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
         *(polje + n * i + j) = '.';
      }
   }
}

void crtajPutanju(char *polje, int n, char znak) {
   int redak = 0, stupac = 0;
   *(polje + n * redak + stupac) = znak;
   int smjer;
   while (redak < n - 1 && stupac < n - 1) {
      smjer = rand() % 2; // ako je 0-idi dolje, ako je 1-idi desno
      if (smjer == 0) {
         ++redak;
      } else {
         ++stupac;
      }
      *(polje + n * redak + stupac) = znak;
   }
}

void ispisiPolje(char *polje, int n) {
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
         printf("%2c", *(polje + n * i + j));
      }
      printf("\n");
   }
}