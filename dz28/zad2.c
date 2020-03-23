#include <stdio.h>

#define MAX_N 50

int main(void) {
   FILE *ulaz = fopen("slucajni.bin", "rb");

   int n;
   int polje[MAX_N];

   while (fread(&n, sizeof(n), 1, ulaz) == 1) {
      fread(polje, sizeof(int), n, ulaz);
      printf("%d ", n);

      for (int i = 0; i < n; ++i)
         printf("%d ", polje[i]);
      printf("\n");
   }

   fclose(ulTok);

   return 0;
}