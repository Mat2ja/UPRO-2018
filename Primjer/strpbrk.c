#include <stdio.h>
#define MAX 128
char *strpbrk(const char * dest, const char * breakset) {
   for (; * dest; dest++) {
      if (strchr(breakset, *dest) != 0) {
         return ((char *) dest);
      }
   }
   return NULL;
}
int main(void) {
    char src[] = "Izvorni niz";
    printf("%s\n", strpbrk(src, "rn"));
}

