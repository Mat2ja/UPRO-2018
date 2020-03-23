#include <stdio.h>
#define MAXOCJENA 5
int main(void) {
   int br[MAXOCJENA] = {0};
   int oc;
   while (1) {
      scanf("%d", &oc);
      if (oc == 0) 
         break;
      else if (oc > MAXOCJENA) 
         printf("Neispravna ocjena: %d\n", oc);
      else 
         br[oc-1]++;  
   }
   for (oc = 1; oc <= MAXOCJENA; oc++) {
     printf("Broj ocjena %d: %d\n", oc, br[oc-1]);
   }
   return 0;
}
