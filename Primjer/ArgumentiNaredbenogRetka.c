#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <assert.h>

int main(int argc, char *argv[]) {
   int i;
   for (i = 0; i < argc; i++) {
      printf ("%s ", argv[i]);
   }
   printf ("\n");
   for (i = 0; argv[i] != NULL; i++){
       printf ("%s ", argv[i]);     
   }
   printf ("\n");
   for (; *argv != NULL; argv++){
       printf ("%s ", *argv);     
   }
   return EXIT_SUCCESS;
}
