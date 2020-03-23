#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80
int main(void) {
   FILE *f;
   char redak[MAX];
   char *kraj;
   f = fopen("in.txt", "r");
   if (f == NULL) {
      perror("Greška kod otvaranja datoteke \"in.txt\"");
      return EXIT_FAILURE;
   }
   while (fgets(redak, MAX, f) != NULL) {
      if ((kraj = strchr(redak, '\n')) != NULL) {
         *kraj = '\0';
      }
      puts(redak);
   }
   return EXIT_SUCCESS;   
}