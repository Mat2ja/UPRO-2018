#include <stdio.h>
#define MAX 128
char *stcat(char *dest, const char *src) {
   // zapamti pokazivač na početak odredišta
   char *p = dest; 
   // pomakni se na kraj odredišta
   while (*dest) dest++;
   // sve dok src pokazuje na znak koji nije '\0'
   // kopiraj znak na koji pokazuje src tamo kamo pokazuje dest
   // i nakon toga pomakni src i dest prema naprijed
   while (*src) *dest++ = *src++;
   // oznaka kraja time nije kopirana, a dest sada pokazuje iza 
   // zadnjeg kopiranog znaka, pa tamo treba upisati oznaku kraja
   *dest = '\0';
   return p;
}
int main(void) {
    char dest[MAX] = "Odredište", src[] = "Izvorni niz";
    printf("\"%s\"\n", strcat(dest, src));
}

