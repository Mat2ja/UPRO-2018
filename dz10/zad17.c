#include <stdio.h>

int main(void) {
   int n;

   do {
      printf("Upisite cijeli broj > ");
      scanf("%d", &n);

      if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z') ||
          (n >= '0' && n <= '9')) {
         printf("%d %c\n", n, n);
      }
   } while ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z') ||
            (n >= '0' && n <= '9'));
   return 0;
}