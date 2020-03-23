#include <stdio.h>
#include <stdlib.h>
int main(void) {
   FILE *f;
   char c;
   f = fopen("inn.txt", "r");
   if (f == NULL) {
      perror("Greška kod otvaranja datoteke \"in.txt\"");
      return EXIT_FAILURE;
   }
   while ((c = fgetc(f)) != EOF) {
      putchar(c);
   }
   return EXIT_SUCCESS;   
}