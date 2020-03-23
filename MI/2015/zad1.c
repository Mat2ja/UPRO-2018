#include <stdio.h>
#define MAX 100

int main(void) {
   char ulaz[MAX + 1];
   char kript[MAX + 1];
   unsigned int a, b;
   int i = 0;

   printf("Upisite niz: ");
   fgets(ulaz, MAX + 1, stdin);
   printf("Upisite dva broja: ");
   scanf("%u %u", &a, &b);

   while (ulaz[i] != '\0') {
      if (ulaz[i] == '\n') {
         ulaz[i] = '\0';
      }
      ++i;
   }

   while (ulaz[i] != '\0') {
      kript[i] = ((a * (ulaz[i] - 'A') + b) % 26 + 'A');
      ++i;
   }

   kript[i] = '\0';
   printf("Kriptirani niz: %s\n", kript);
   printf("Ulazni niz: %s\n", ulaz);

   return 0;
}