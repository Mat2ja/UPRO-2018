#include <stdio.h>
#include <conio.h>
int main(void) {
   char c;
   while ((c = getch()) != 3) {
      putchar (c == '\r' ? '\n' : c);
   }
   return 0;
}
