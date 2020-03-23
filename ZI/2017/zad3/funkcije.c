#include "funkcije.h"
#include <ctype.h>
#include <stdlib.h>

char *kazaljka(char *niz) {
   while (*niz != '\0') {
      if (isupper(*niz)) {
         return niz + 1;
      }
      ++niz;
   }
   return NULL;
}