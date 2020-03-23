#include <stdio.h>

int main(void) {
   int n;

   printf("Upisati n > ");
   scanf("%d", &n);

   FILE *tok = fopen("tablica.txt", "w");

   fprintf(tok, "Tablica mnozenja %d x %d\n", n, n);
   fprintf(tok, " ");

   for (int i = 1; i <= n; ++i) {
      fprintf(tok, "%4d", i);
   }
   fprintf(tok, "\n");

   fprintf(tok, "----+");
   for (int i = 1; i <= n; ++i) {
      fprintf(tok, "----");
   }
   fprintf(tok, "\n");

   for (int i = 1; i <= n; ++i) {
      fprintf(tok, "%4d!", i);
      for (int j = 1; j <= n; ++j) {
         fprintf(tok, "%4d", i * j);
      }
      fprintf(tok, "\n");
   }

   fprintf(tok, "----+");
   for (int i = 1; i <= n; ++i) {
      fprintf(tok, "----");
   }
   fprintf(tok, "\n");

   return 0;
}