#include <stdio.h>

unsigned long long kvadrat(int n) {
   unsigned long long kv;
   kv = (unsigned long long)n * n;
   return kv;
}

int main(void) {
   int broj;
   unsigned long long rez;

   printf("Upisite cijeli broj > ");
   scanf("%d", &broj);
   rez = kvadrat(broj);
   printf("%d na kvadrat je %llu", broj, rez);

   return 0;
}