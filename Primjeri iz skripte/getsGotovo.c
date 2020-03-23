#include <stdio.h>
#include <string.h>
#define MAX 80
int main(void) {
   char redak[MAX], *p;
   while ((p = gets(redak))) {
      if (strcmp(p, "gotovo") == 0) break;
      puts(p);
   }
}
