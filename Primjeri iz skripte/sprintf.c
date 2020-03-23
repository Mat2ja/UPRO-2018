#include <stdio.h>
#define MAX 80
int main(void) {
   char imePrezime[]="Ljudevit Gaj";
   char ime[MAX], prezime[MAX], prezimeIme[2*MAX];
   sscanf(imePrezime, "%s %s", ime, prezime);
   sprintf(prezimeIme, "%s, %s", prezime, ime);
   printf("%s\n", prezimeIme);
   return 0;
}
