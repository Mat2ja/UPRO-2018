#include <stdio.h>

int main(void) {
   int m1 = -1, m2 = -1, m3 = -1, m4 = -1;
   int r1, r2;

   r1 = scanf("%5d %d", &m1, &m2);
   r2 = scanf("%*c50%3d %d", &m3, &m4); // preskace razmake samo ako ih ima, inace normalno nastavlja

   printf("|%d|%d|%d\n", m1, m2, r1);
   printf("|%d|%d|%d\n", m3, m4, r2);
   printf("|%c|", getchar());

   return 0;
} 

/*
|-12|-1|1
|72|211|2
|.|