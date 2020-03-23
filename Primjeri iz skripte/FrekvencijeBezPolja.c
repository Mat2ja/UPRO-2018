#include <stdio.h>
int main(void) {
   int br1 = 0, br2 = 0, br3 = 0, br4 = 0, br5 = 0;
   int oc;
   while (1) {
      scanf ("%d", &oc);
      if (oc == 0) break;
      switch (oc) {
      case 1:
         br1++;
         break;
      case 2:
         br2++;
         break;
      case 3:
         br3++;
         break;
      case 4:
         br4++;
         break;
      case 5:
         br5++;
         break;
      default:
         printf ("Neispravana ocjena: %d", oc);
      }      
   }
   printf ("Broj ocjena 1: %d\n", br1);
   printf ("Broj ocjena 2: %d\n", br2);
   printf ("Broj ocjena 3: %d\n", br3);
   printf ("Broj ocjena 4: %d\n", br4);
   printf ("Broj ocjena 5: %d\n", br5);
   return 0;
}
