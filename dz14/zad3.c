#include <stdio.h>

float kvadrat(float n) {
   float kv;
   kv = n * n;
   return kv;
}

int main(void) {
   float n;
   float rez;

   printf("Upisite cijeli broj > ");
   scanf("%f", &n);
   rez = kvadrat(n);
   printf("%f na kvadrat jest %f", n, rez);

   return 0;
}