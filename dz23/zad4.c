#include <stdio.h>

int main(void) {
   char niz1[20], niz2[20];

   scanf(" %*[^\n]");
   scanf(" %*[^\n]");
   scanf(" %[^#]", niz1); //puta
   scanf("#n%s", niz2); //aveden#

   printf("|%s|\n", niz1);
   printf("|%s|\n", niz2);
   printf("|%c|", getchar()); //'\n'

   return 0;
}

/*
|puta|
|aveden#|
|
|