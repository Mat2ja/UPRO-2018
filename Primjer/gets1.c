#include <stdio.h>
#define MAX 80
int main(void) {
   char redak[MAX], *p;
   while ((p = gets(redak))) {
      while (*p) printf("%d ", *(p++));
   }
   return 0;
}
