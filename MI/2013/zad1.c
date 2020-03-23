#include <math.h>
#include <stdio.h>

int main(void) {
   int dg, gg, i, broj, brojac = 0, jeProst;

   printf("Unesite donju i gornju granicu intervala brojeva: ");
   scanf("%d %d", &dg, &gg);

   for (broj = dg; broj <= gg; ++broj) {
      jeProst = 1;

      /* ako je broj veći od 2 i paran je, onda nije prost */
      if (broj % 2 == 0 && broj > 2)
         jeProst = 0;

      /* inače ispitivati djeljivost samo s neparnim brojevima većim od 2 */
      else
         for (i = 3; i <= (int)sqrt(broj);
              i = i + 2) { /* ili pow (broj, 1./2)) */
            if (broj % i == 0) {
               jeProst = 0;
               break;
            }
         }

      if (jeProst) {
         brojac++;
         if (brojac == 1)
            printf("Prosti brojevi u intervalu [%d, %d]:\n", dg, gg);
         printf("Broj: %d\n", broj);
      }
   }
   if (brojac > 0)
      printf("Ukupno prostih brojeva: %d", brojac);
   else
      printf("\nU intervalu [%d, %d] nema prostih brojeva.", dg, gg);

   return 0;
}