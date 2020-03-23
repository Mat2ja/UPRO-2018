#include <stdio.h>
#define MAX 100

int main(void) {
   char ulaz[MAX + 1];
   char izlaz[MAX + 1];
   int i = 0, j = 0;

   printf("Upisite niz: ");
   fgets(ulaz, MAX + 1, stdin);

   do {
      if (ulaz[i] >= 'A' && ulaz[i] <= 'Z') {
         izlaz[j] = ulaz[i];
         ++j;
         ++i;
         while (ulaz[i] < 'a' || ulaz[i] > 'z') {
            if (ulaz[i] >= 'a' && ulaz[i] <= 'z') {
               izlaz[j] = ulaz[i];
               ++i;
               ++j;
            } else {
               ++i;
            }
         }
      }
      ++i;
   } while (ulaz[i] != '\0' || ulaz[i] != '\n');

   izlaz[j + 1] = '\0';

   printf("Novi niz: %s", izlaz);
   printf("Ulazni niz: %s", ulaz);

   return 0;
}