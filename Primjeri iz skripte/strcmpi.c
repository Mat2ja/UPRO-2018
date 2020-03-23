#include <stdio.h>
#define MAX 128
int strcmpi( const char *lhs, const char *rhs ) {
   for (;tolower(*lhs) == tolower(*rhs) && *lhs; lhs++, rhs++);
   return tolower(*lhs) - tolower(*rhs);
}

int main(void) {
    char dest[MAX] = "izvorni niz", src[] = "Izvorni niz";
    printf("%d\n", strcmpi(dest, src));
}

