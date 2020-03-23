#include <stdio.h>

#include "math2.h"

int main(void) {

   printf("binKoef(%d, %d) = %d\n", 12, 8, binKoef(12, 8));
   printf("eksp(%f, %d) = %f\n", 1.1f, -2, eksp(1.1f, 2));
   printf("fabsolut(%f) = %f\n", -5.1f, fabsolut(-5.1f));
   printf("dabsolut(%lf) = %lf\n", -5.1, dabsolut(-5.1));
   printf("iabsolut(%d) = %d\n", -5, iabsolut(-5));
   printf("fakt(%u) = %llu\n", 12U, fakt(12U));

   return 0;
}
