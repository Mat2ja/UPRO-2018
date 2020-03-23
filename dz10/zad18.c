#include <stdio.h>

int main(void) {
   char c1, c2, c;

   printf("Upisite dva znaka > ");
   scanf("%c%c", &c1, &c2);

   for (c = c1; c <= c2; c = c + 1) {
      printf("%c", c);
   }
   return 0;
}
