#include <stdio.h>

int main(void) {
   float visina;

   printf("Upisite visinu (km) > ");
   scanf("%f", &visina);

   if (visina >= 0.f && visina < 12.f)
      printf("troposfera");
   else if (visina >= 12.f && visina < 50.f)
      printf("stratosfera");
   else if (visina >= 50.f && visina < 80.f)
      printf("mezosfera");
   else if (visina >= 80.f && visina < 700.f)
      printf("termosfera");
   return 0;
}