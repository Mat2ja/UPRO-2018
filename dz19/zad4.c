#include <stdio.h>

static int x = 10;

void fun(void) {
   static int x = 5;

   printf("x = %d\n", x);
   x += 3;
}

int main(void) {

   fun();
   printf("x = %d\n", ++x);

   fun();
   printf("x = %d\n", ++x);

   return 0;
}

/*
x = 5
x = 11
x = 8
x = 12