#include <stdio.h>
#define MAX 128
char *strrchr(const char *str, int ch) {
   const char *p = NULL;
   while (*str) {
      if (*str == ch) p = str;
      str++;
   }
   return (char *)p;
}

int main(void) {
    char src[] = "Izvorni niz";
    printf("%s\n", strrchr(src, 'n'));
}

