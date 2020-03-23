#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GEN 1000
#define DG 32
#define GG 126

int main(void) {
   char slucajni;
   static int slova, znamenke, ostali;

   srand((unsigned)time(NULL));

   for (int i = 0; i < GEN; ++i) {
      slucajni = rand() % (GG - DG + 1) + DG;

      if (isalpha(slucajni))
         ++slova;
      else if (isdigit(slucajni))
         ++znamenke;
      else
         ++ostali;
   }

   printf("Slova   : %3d\n", slova);
   printf("Znamenke: %3d\n", znamenke);
   printf("Ostali  : %3d", ostali);
   return 0;
}
