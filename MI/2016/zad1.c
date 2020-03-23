#include <stdio.h>
#define DO_KOLIKO 10000

int main(void) {
   unsigned int testiraniBroj;
   int brojacBitova, posmak;

   for (testiraniBroj = 1; testiraniBroj <= DO_KOLIKO; ++testiraniBroj) {
      brojacBitova = 0;
      posmak = 0;
      while (posmak < 32 && brojacBitova < 5) {
         brojacBitova += testiraniBroj >> posmak & 1;
         ++posmak;
      }
      if (brojacBitova == 4) {
         printf("%4d\n", testiraniBroj);
      }
   }

   return 0;
}