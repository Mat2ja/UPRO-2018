#include <stdio.h>
int main(void) {
   int redak, stupac;
   for (redak = 1; redak <= 10; redak = redak + 1) {
      for (stupac = 1; stupac <= 10; stupac = stupac + 1) {
         printf("%4d", redak * stupac);
      }
      printf("\n");
   }
   return 0;
}