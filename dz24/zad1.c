#include <stdio.h>

int main(void) {
   int c;

   while ((c = getchar()) != EOF) {
      putchar(c);
   }

   return 0;
}

/*
a) prog.exe < ulaz.txt
b) prog.exe < ulaz.txt > izlaz.txt