#include <stdio.h>
void zamijeni(int *a, int *b) {
   int pom;         
   pom = *a;        // 3
   *a = *b;         // 4
   *b = pom;        // 5
   return;         // 6
}
int main (void) {
   int a=3, b=5;     // 1
   zamijeni(&a, &b);  // 2
   printf("%d %d\n", a, b);
   return 0;
}
