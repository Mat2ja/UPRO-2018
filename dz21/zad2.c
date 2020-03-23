/*
Napisati i testirati vlastitu funkciju myStrlen koja obavlja isto što i
funkcija strlen definirana u <string.h> . Jedina razlika neka bude u tome što
myStrlen vraća rezultat tipa int , umjesto tipa
size_t . U funkciji se ne smiju koristiti funkcije iz <string.h> .
*/

#include <stdio.h>

int myStrlen(const char *niz) {
   int i = 0;
   while (*(niz + i) != '\0') {
      ++i;
   }
   return i;
}

int main(void) {
   char niz[] = "Ovo je niz";
   char *konst = "Ovo je konstantni niz";

   printf("%d\n", myStrlen(niz));
   printf("%d\n", myStrlen(konst));

   return 0;
}