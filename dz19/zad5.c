#include <stdio.h>

void fun(void) {
   static int x = 5;
   int y = 5;

   printf("%d %d\n", ++x, --y);
}

int main(void) {

   fun();
   fun();
   fun();

   return 0;
}

/*
6 4
7 4
8 4

