#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <malloc.h>
struct tocka { 
   double x;
   double y;
} ;
double udaljenost(struct tocka *t1, struct tocka *t2) {
   return sqrt(pow(t1->x - t2->x, 2) + pow(t1->y - t2->y, 2));
}
int main(void) {
   struct tocka *p = NULL, *pom;
   FILE *f;
   int n = 0, i, j, mini, minj;
   double d, mind;
   f = fopen("tocke.txt", "r");
   if (f == NULL) {
      perror("Greska kod otvaranja");
      return EXIT_FAILURE;
   }
   while (1) {
      pom = realloc (p, (n + 1) * sizeof(*p)); // pronaĐi mjesta za sljedeu toku
      if (pom == NULL) {
         perror("Greçka kod realokacije (nastavlja se s dosad uitanim tokama)");
         break;
      }
      p = pom; 
      if (fscanf(f, "%lf %lf", &p[n].x, &p[n].y) < 2) break;   
      n++;
   }
   fclose(f);
   // poetna vrijednost za najmanju udaljenost, izmeĐu bilo koje dvije toke
   mind = udaljenost(p, p+1);  // ili &p[0], &p[1]
   // svaka toka sa svakom drugom tokom
   for (i = 0; i < n; i++) {
      for (j = 0; j < i; j++) { 
         d = udaljenost(p + i, p + j); // ili &p[i], &p[j]
         if (d < mind) {
            mind = d;
            mini = i;
            minj = j;
         }
      }
   }
   printf ("Najbli§e toke su (%g,%g) i (%g,%g) s udaljenoçu %g\n", p[mini].x, p[mini].y, p[minj].x, p[minj].y, mind);
   free(p);
   return EXIT_SUCCESS;
}