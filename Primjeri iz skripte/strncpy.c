#include <stdio.h>
#define MAX 128
char *strncpy(char *dest, const char *src, size_t count) {
   // zapamti pokazivač na početak odredišta
   char *p = dest; 
   // sve dok src pokazuje na znak koji nije '\0'
   // i dok je kopirano manje od count znakova
   // kopiraj znak na koji pokazuje src tamo kamo pokazuje dest
   // i nakon toga pomakni src i dest prema naprijed
   while (*src && count > 0) {
      *dest++ = *src++;
		count--;
   }
   // nastavi dodavati oznaku kraja do ukupno count znakova
   while (count > 0) {
		*(dest++) = '\0';
		count--;
	}
   return p;
}

int main(void) {
    char dest[MAX], src[] = "Izvorni niz";
    printf("\"%s\"\n", strncpy(dest, src, 5));
}

