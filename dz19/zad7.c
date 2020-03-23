#include <stdio.h>

static int x = 25;

void fun1(void) {
   static int x = 5;

   printf("%d\n", ++x);
}

void fun2(void) {
   int x = 10; // auto pa svaki put pocinje od 10

   printf("%d\n", ++x);
}

void fun3(void) { printf("%d\n", ++x); }

int main(void) {
   x++;
   {
      static int x = 15;
      {
         int x = 20; // auto pa static ima prednost pa je 25

         printf("%d\n", x++); // printa 26
      }

      printf("%d\n", x++);
   }

   printf("%d\n", x++);

   fun1();
   fun2();
   fun3();
   fun1();
   fun2();
   fun3();

   return 0;
}

/*
20
15
26
6
11
28
7
11
29