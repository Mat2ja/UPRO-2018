#include <stdio.h>

int kvadrat(int n) {
   int kv;
   kv = n * n;
   return kv;
}

int main(void) {
   int n, rez;

   printf("Upisite cijeli broj > ");
   scanf("%d", &n);
   rez = kvadrat(n);

   printf("%d na kvadrat jest %d", n, rez);

   return 0;
}