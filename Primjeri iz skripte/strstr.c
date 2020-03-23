#include <stdio.h>
#define MAX 128
char *strstr (const char *str, const char * substr) {
   int len = strlen(substr);
   const char *p = str;
   for (; (p = strchr(p, *substr)) != 0; p++) {
      if (strncmp(p, substr, len) == 0) return (char *) p;
   }
   return NULL;
}


int main(void) {
    char dest[MAX] = "Izvorni niz", src[] = "rni";
    printf("%s\n", strstr(dest, src));
}

