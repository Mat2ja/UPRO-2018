#include <stdio.h>
int main(void) {
   char niz[128];
   while (scanf("%[^\n]%*c", niz) == 1) {
      printf("%s\n", niz); // ili puts(niz);
   }
   return 0;
}
