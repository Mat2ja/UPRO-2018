#include <stdio.h>

int kolikiJeInt(void) { return sizeof(int); }

int main(void) {
   printf("Na ovom racunalu int koristi bajtova: %d", kolikiJeInt());

   return 0;
}