#include <stdio.h>
#define MAX_NIZ 8

int main(void) {
   char niz[MAX_NIZ + 1];
   int ascii, i = 0;

   printf("Upisite brojeve > ");

   do {
      scanf("%d", &ascii);
      if (ascii >= 'A' && ascii <= 'Z') {
         niz[i] = ascii;
         i = i + 1;
      }
   } while (i < MAX_NIZ && ascii >= 'A' && ascii <= 'Z');

   // zasto je sljedeca naredba vazna?
   niz[i] = '\0';
   printf("%s\n", niz);

   return 0;
}