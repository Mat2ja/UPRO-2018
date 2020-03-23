#include <stdio.h>

int main(void) {
   FILE *ulaz = fopen("ulaz.txt", "r");

   char c;

   while ((c = getc(ulaz)) != EOF) {
      putchar(toupper(c));
   }

   fclose(ulaz);

   return 0;
}