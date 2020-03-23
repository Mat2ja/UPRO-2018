#include <stdio.h>

int main(void) {
   int polje[4][3] = {{2, 11, 23}, {29, 31, 37}, {47, 51, 59}, {61, 67, 71}};
   int *p = polje[0];
   int i1 = (*p)++;
   int i2 = *p++;

   printf("%d %d\n", i1, i2);
   p = &polje[1][1];
   i1 = ++*p;
   i2 = *++p;
   printf("%d %d\n", i1, i2);

   p = &polje[2][3];
   i1 = ++*--p;
   p = &polje[3][3];
   i2 = ++*p--;

   printf("%d %d\n", i1, i2);

   return 0;
}

/* 
2 3
32 37
60 38