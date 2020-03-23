/*
Napisati i testirati vlastitu funkciju myStrcat koja obavlja isto što i
funkcija strcat definirana u <string.h> . U funkciji se ne smiju koristiti
funkcije iz <string.h>
*/

#include <stdio.h>

char *myStrcat(char *cilj, const char *izvor) {
   int i = 0, j = 0;

   while (*(cilj + i) != '\0') {
      ++i;
   }

   while (*(izvor + j) != '\0') {
      *(cilj + i++) = *(izvor + j++);
   }

   *(cilj + i) = '\0';
   return cilj;
}

int main(void) {
   char ciljniNiz[30 + 1] = "Prvi";
   char *izvorniNiz = "Drugi";

   myStrcat(ciljniNiz, izvorniNiz);
   printf("%s\n", ciljniNiz);

   myStrcat(ciljniNiz, "Treci");
   printf("%s\n", ciljniNiz);

   return 0;
}

