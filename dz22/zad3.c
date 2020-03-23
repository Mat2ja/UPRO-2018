#include <stdio.h>
#define MAXNIZ 80

int main(void) {
   char s1[MAXNIZ + 1], s2[MAXNIZ + 1], c;
   int i = 0;

   while ((c = getchar()) != 'X')
      s1[i++] = c;
   s1[i] = '\0';

   i = 0;
   while ((c = getchar()) != 'Y')
      s2[i++] = c;
   s2[i] = '\0';

   i = 0;
   while (s1[i] != '\0')
      putchar(s1[i++]);

   printf("\n");

   i = 0;
   while (s2[i] != '\0')
      putchar(s2[i++]);

   return 0;
}