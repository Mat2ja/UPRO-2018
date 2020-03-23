#include <stdio.h>
int main(void) {
   int i, n;
   float suma = 0, prosjek;
   do {
      scanf("%d", &n);
   } while (n <= 0);
	float p[n];
	for (i = 0; i < n; i++) {
			scanf("%f", &p[i]);
			suma += p[i];
	}
	prosjek = suma / n;
	printf("Prosjek: %g\n", prosjek);
	for (i = 0; i < n; i++) {
			printf("%g %c\n", p[i], 
					p[i] > prosjek ? '>' :
					p[i] == prosjek ? '=' : '<');
	}
}
