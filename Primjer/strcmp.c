#include <stdio.h>
#define MAX 128
int strcmp( const char *lhs, const char *rhs ) {
   for (;*lhs == *rhs && *lhs; lhs++, rhs++);
   return *lhs - *rhs;
}

int main(void) {
    char dest[MAX] = "Izvorni niz", src[] = "Izvorni niz";
    printf("%d\n", strcmp(dest, src));
}

