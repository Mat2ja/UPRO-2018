#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
int main(void) {
   float *t, dummy, prosjek, stdev;
   int n = 0, i;
   FILE *f;
   f = fopen("temperature.txt", "r");
   if (f == NULL) {
      perror("Nije uspjelo otvaranje datoteke temperature.txt");
      return EXIT_FAILURE;
   }
   while (fscanf(f, "%f", &dummy) == 1) n++; // prebrajanje temperatura
   if (n < 2) {
      fprintf(stderr, "Nema dovoljno podataka!\n");
      return EXIT_FAILURE;
   }
#if 1
   t = malloc(n * sizeof(*t));  // rezervacija memorije za n temperatura
#else
   t = calloc(n, sizeof(*t));
#endif
   if (t == NULL) {
      perror("Neuspjela rezervacija");
      return EXIT_FAILURE;
   }
   fseek(f, 0L, SEEK_SET); //  povratak na početak datoteke radi stvarnog čitanja
   n = 0; // koristimo isti brojač
   prosjek = 0;
   while (fscanf(f, "%f", &t[n]) == 1) {  // ili t + n
      prosjek += t[n];  // ili *(t+n)
      n++;
   }
   fclose(f); // f više ne treba pa odmah oslobađamo resurs
   prosjek /= n;
   for (stdev = 0, i = 0; i < n; i++) {  // računanje standardne devijacije
      stdev += (t[i] - prosjek) * (t[i] - prosjek);
   }
   stdev = sqrt (stdev / (n - 1));
   printf ("Standardna devijacija je %g", stdev);
   free(t);
   return EXIT_SUCCESS;   
}