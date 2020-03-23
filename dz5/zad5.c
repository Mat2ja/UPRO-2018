#include <stdio.h>

int main(void) {
   int op, a, b;

   printf("1. a + b\n"
          "2. a - b\n"
          "3. a * b\n"
          "4. a / b\n");
   printf("Upisite redni broj operacije > ");
   scanf("%d", &op);

   if (op >= 1 && op <= 4) {
      printf("Upisite operande > ");
      scanf("%d %d", &a, &b);
      switch (op) {
      case 1:
         printf("%d + %d = %d", a, b, a + b);
         break;
      case 2:
         printf("%d - %d = %d", a, b, a - b);
         break;
      case 3:
         printf("%d * %d = %d", a, b, a * b);
         break;
      case 4:
         if (b == 0) {
            printf("Neispravni operandi");
         } else {
            printf("%d / %d = %d", a, b, a / b);
         }
         break;
      }
   }
   return 0;
}