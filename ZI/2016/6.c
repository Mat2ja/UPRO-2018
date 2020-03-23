#include <stdio.h>

int main(void) {
   struct {
      short int mbr;
      char prezime[20 + 1];
      int ocjene[2];
   } studenti[100];

   scanf("%hd %s %d %d", &studenti[1].mbr, studenti[1].prezime,
         &studenti[1].ocjene[0], &studenti[1].ocjene[1]);

   return 0;
}