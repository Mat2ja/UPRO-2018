#include <stdio.h>

int main(void) {
   int rez1, rez2;
   int a, b;
   char s1[10 + 1], s2[10 + 1], s3[10 + 1], s4[10 + 1];

   rez1 = scanf("%3d %d", &a, &b);
   rez2 = scanf("%s%s%4s %s", s1, s2, s3, s4);

   return 0;
}

