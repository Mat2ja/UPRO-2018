#include <stdio.h>
#include <string.h>

void izbaciZnakove(char *niz, char znak) {
   char *p = niz;

   while (*p != '\0' && *p == znak) {
      p++;
   }
   strcpy(niz, p);

   return;
}

int main(void) {
   char niz[30 + 1];
   /*char znak;*/

   printf("Upisi niz > ");
   fgets(niz, 30 + 1, stdin);
   /*printf("Upisi trazeni znak > ");
   scanf("%c", &znak);*/

   izbaciZnakove(niz, 't');

   printf("%s", niz);

   return 0;
}