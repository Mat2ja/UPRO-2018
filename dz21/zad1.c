/*
Napisati jednostavni program kojim će se pokazati da korištenje funkcije fabsf
nad argumentom za kojeg je zapravo trebalo koristiti funkciju fabs , može
dovesti do gubitka preciznosti.
*/

#include <math.h>
#include <stdio.h>

int main(void) {
   double x = -12345.1234567;
   double rez1 = fabsf(x);
   double rez2 = fabs(x);

   printf("%14.7lf\n", rez1);
   printf("%14.7lf\n", rez2);

   return 0;
}