#include <stdbool.h>
#include <stdio.h>

bool jestVelikoSlovo(char c) {
   bool jestVeliko;
   jestVeliko = c >= 'A' && c <= 'Z';
   return jestVeliko;
}

int main(void) {
   char znak;

   printf("Upisite znak > ");
   scanf("%c", &znak);

   if (jestVelikoSlovo(znak)) {
      printf("Jest veliko slovo");
   } else {
      printf("Nije veliko slovo");
   }

   return 0;
}