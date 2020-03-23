#include <stdio.h>

int main(void) {
   int n;

   do {
      printf("Upisite dekadski cijeli broj > ");
      scanf("%d", &n);
      if (n != 0) {
         printf("%11o\n%8X\n", n, n);
      }
   } while (n != 0);

   return 0;
}