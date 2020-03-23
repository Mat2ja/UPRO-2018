#include <stdio.h>
int main (void) {
   int brojac = 0, broj, dg, gg;
   char odgovor;
   printf("Unijeti donju i gornju granicu:");
   do {
      scanf("%d %d", &dg, &gg);
   } while (dg >= gg);
   while (dg <= gg) {
      broj = (dg + gg)/2;
      brojac++;
      printf("%d\n", broj);
      scanf ("%c ", &odgovor);
      if (odgovor == '=') {
         break;
      } else if (odgovor == '<') {
         dg = broj + 1;
      } else {
         gg = broj - 1;
      }
   }
   if (dg <= gg) {
      printf ("Zamišljeni broj pogođen je u %d pokušaja\n",
             brojac);
    } else {
      printf ("Odgovori nisu bili ispravni\n");
   }
   return 0;
}
