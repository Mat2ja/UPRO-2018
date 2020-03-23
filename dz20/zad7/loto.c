#include "loto.h"
#include <stdlib.h>
#include <time.h>

#define MAX_KUGLICA 7
#define KUGL_U_BUBNJU 39

static int doSadaIzvucenoBrojeva = 0;

int dajSljedecuKuglicu(void) {
   static int doSadaIzvuceniBrojevi[MAX_KUGLICA];
   static _Bool inicijaliziranGenPseudo = 0;
   
   if (!inicijaliziranGenPseudo) {
      srand((unsigned int)time(NULL));
      inicijaliziranGenPseudo = 1;
   }

   int izvuceniBroj;

   if (doSadaIzvucenoBrojeva < MAX_KUGLICA) {
      _Bool jestDuplikat;

      do {
         izvuceniBroj = (float)rand() / (RAND_MAX + 1) * (KUGL_U_BUBNJU) + 1;
         jestDuplikat = 0;
         for (int i = 0; i < doSadaIzvucenoBrojeva; ++i) {
            if (izvuceniBroj == doSadaIzvuceniBrojevi[i]) {
               jestDuplikat = 1;
            }
         }
      } while (jestDuplikat);

      doSadaIzvuceniBrojevi[doSadaIzvucenoBrojeva] = izvuceniBroj;
      ++doSadaIzvucenoBrojeva;

   } else {
      izvuceniBroj = -1;
   }
   return izvuceniBroj;
}

void resetirajBubanj(void) {
   doSadaIzvucenoBrojeva = 0;
   return;
}