#include <stdio.h>

int main(void) {
   int n, fibClan;

   printf("Upisite n > ");
   scanf("%d", &n);

   FILE *tok = fopen("fibonacci.bin", "rb");

   for (int i = 1; i <= n; ++i) {
      fread(&fibClan, sizeof(fibClan), 1, tok);
      printf("%d\n", fibClan);
   }

   fclose(tok);

   return 0;
}