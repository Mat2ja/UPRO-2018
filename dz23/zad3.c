#include <stdio.h>

int main(void) {
   char niz1[20], niz2[20], niz3[20];

   scanf("%[^\n]", niz1); 
   scanf("%s", niz2); 
   scanf("%[^123]", &niz3[0]);

   printf("|%s|\n", niz1); // Jedan Dva //
   printf("|%s|\n", niz2); //12Tri//
   printf("|%s|\n", niz3); //Cetiri 45 //
   printf("|%c|", getchar()); //1//

   return 0;
}

/*

| Jedan Dva |
|12Tri|
| Cetiri 45 |
|1|

*/