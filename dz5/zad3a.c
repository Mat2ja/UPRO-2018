#include <stdio.h>

int main(void) {
   int bod;

   printf("Upisite broj bodova > ");
   scanf("%d", &bod);

   if (bod >= 0 && bod <= 9)
      printf("nedovoljan");
   else if (bod >= 10 && bod <= 13)
      printf("dovoljan");
   else if (bod >= 14 && bod <= 17)
      printf("dobar");
   else if (bod >= 18 && bod <= 21)
      printf("vrlo dobar");
   else if (bod >= 22 && bod <= 25)
      printf("izvrstan");
   else
      printf("neispravni bodovi");

   return 0;
}
