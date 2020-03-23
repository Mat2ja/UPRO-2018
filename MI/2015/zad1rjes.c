#include <stdio.h>
#define MAXZNAKOVA 100

int main(void) {
   char ulaz[MAXZNAKOVA + 1], izlaz[MAXZNAKOVA + 1];
   int a, b, i = 0;

   printf("Upisite niz: ");
   gets(ulaz);
   printf("Upisite dva broja: ");
   scanf("%d %d", &a, &b);

   while (ulaz[i] != '\0') {
      izlaz[i] = ((ulaz[i] - 'A') * a + b) % 26 + 'A';
      ++i;
   }

   izlaz[i] = '\0';
   printf("Kriptirani niz: %s\n", izlaz);
   printf("Ulazni niz: %s\n", ulaz);

   return 0;
}