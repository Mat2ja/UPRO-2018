#include <stdio.h>
//#pragma pack(1)
#define MAXIME 40
#define MAXOCJENA 50
struct datum {
   char dan;
   char mjesec;
   short godina
};
struct osoba {
   char ime[MAXIME];
   char prezime[MAXIME];
   float visina;
   struct datum datumRodjenja;
};
struct student {
   struct osoba osobni;
   struct osoba majka;
   struct osoba otac;
   char ocjene[MAXOCJENA];
};
float prosjek (struct student *s) {
   int sum = 0, i, n = 0, prosjek; 
   for (i = 0; i < sizeof(s->ocjene); i++) {
      if (s->ocjene[i] > 0) {
        sum += s->ocjene[i];
        n++;
      }
   }
   return n == 0 ? 0 : (float)sum/n;
}
int main(void) {
   struct student ivan;
   for (int i=0; i < MAXOCJENA; i++) ivan.ocjene[i] = i % 5 + 1;
   float r = prosjek(&ivan);
   printf ("%f\n", r);
}