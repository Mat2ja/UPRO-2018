#include <stdio.h>
#include <limits.h>
int main(void) {
   int a, i;
	do {
	   scanf("%d", &a);
	   for (i = sizeof(a) * CHAR_BIT - 1; i >= 0; i--) {
         printf ("%d", (a >> i) & 1);
			if (i % CHAR_BIT == 0) {
            printf(" ");
         }
		}
		printf("\n");
   } while (a != 0);
   return 0;
}
