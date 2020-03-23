#include <stdio.h>
#include <stdlib.h>
#define MAX 80
int main(void) {
   FILE *f;
   char redak[MAX+1];
   char format[MAX+1];
   f = fopen("in.txt", "r");
   if (f == NULL) {
      perror("Greška kod otvaranja datoteke \"in.txt\"");
      return EXIT_FAILURE;
   }
   sprintf (format, "%%%d[^\\n]%%*c", MAX);
   while (fscanf(f, format, redak) == 1) {
      printf("%s\n", redak);
   }
   return EXIT_SUCCESS;   
}