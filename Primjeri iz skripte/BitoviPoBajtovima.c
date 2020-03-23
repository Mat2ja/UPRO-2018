#include <stdio.h>
#include <limits.h>
int main(void) {
   double a;
   int i, j;
   char *p;
   while(1) {
      scanf ("%lf", &a);
      if (a == 0) break;
      p = (char *)&a + sizeof(a) - 1;  // adresa posljednjeg bajta
	   for (i = sizeof(a); i > 0; i--, p--) { // po svim bajtovima
         for (j = CHAR_BIT - 1; j >= 0; j--) { // po bitovima u bajtu
            printf ("%d", (*p >> j) & 1);
         }
         printf(" ");
		}
		printf("\n");
   }
   return 0;
}
