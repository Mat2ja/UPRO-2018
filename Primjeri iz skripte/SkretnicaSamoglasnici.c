#include <stdio.h>
int main (void) {
   char c;
   scanf ("%c", &c);   // formatskom specifikacijom %c učitavaju se varijable tipa char
   switch (c) {
   case 'A': case 'E': case 'I': case 'O': case 'U':
      printf ("Učitan je samoglasnik\n");
      break;
   default:
      printf ("Učitan je suglasnik\n");
      break;
   }
}
