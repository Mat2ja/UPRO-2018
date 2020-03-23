#include <stdio.h>
#include <stdlib.h>

int najjeftiniji(FILE *dat, char *podniz, char *naziv, float *cijena) {
   float cijena_jela;   /*procitana cijena u pojedinom koraku*/
   char naziv_jela[51]; /*procitani naziv u pojedinom koraku*/

   *cijena = 0;

   fseek(dat, 0, SEEK_SET);
   while (fscanf(dat, "%s %f", naziv_jela, &cijena_jela) != EOF) {
      if (strstr(naziv_jela, podniz) != NULL) {
         if (*cijena == 0 || cijena_jela < *cijena) {
            strcpy(naziv, naziv_jela);
            *cijena = cijena_jela;
         }
      }
   }

   return *cijena > 0;
}

int main() {
   FILE *f;

   char podniz1[21], podniz2[21], naziv[51];
   float cijena;

   f = fopen("jelovnik55.txt", "r");

   if (f == NULL) {
      printf("Datoteku nije moguce otvoriti\n");
      exit(1);
   }

   printf("Unesite dva podniza\n");
   scanf("%s %s", podniz1, podniz2);

   if (najjeftiniji(f, podniz1, naziv, &cijena))
      printf("%s %f\n", naziv, cijena);
   else
      printf("Ne postoji jelo koje sadrzi podniz %s\n", podniz1);
   if (najjeftiniji(f, podniz2, naziv, &cijena))
      printf("%s %f\n", naziv, cijena);
   else
      printf("Ne postoji jelo koje sadrzi podniz %s\n", podniz2);
   fclose(f);

   return 0;
}