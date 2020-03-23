#include <stdio.h>
#define MAX 128
char *strchr(const char *str, int ch) {
   while (*str && *str != ch) str++;
   return *str ? (char *) str : NULL;
}


int main(void) {
    char src[] = "Izvorni niz";
    printf("%s\n", strchr(src, 'n'));
}

