#include <stdio.h>
#define MAX 128
size_t strlen(const char *s) {
   size_t r = 0;
   for (;*s;r++, s++);
   return r;
}

int main(void) {
    char src[MAX] = "Izvorni niz";
    printf("%d\n", strlen(src));
}

