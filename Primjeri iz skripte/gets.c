#include <stdio.h>
#define MAX 80
int main(void) {
   char redak[MAX], *p;
   while ((p = gets(redak))) {
      puts(redak); // ili puts(p) ili printf("%s\n", p)
   }
   return 0;
}
