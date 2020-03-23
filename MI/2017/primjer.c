#include <stdio.h>

int main(void) {
   int i = 5, rez;
   rez = i * i++;
   printf("%d", rez);
   return 0;
}