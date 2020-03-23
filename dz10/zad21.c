#include <stdio.h>
#define donja_g 1
#define gornja_g 4250000000

int main(void) {
   unsigned int n;
   unsigned long long kvadrat;

   printf("Upisite prirodni broj u granicama [%d, %d] > ", donja_g, gornja_g);
   scanf("%d", &n);

   kvadrat = 1ULL * n * n;

   printf("%u * %u = %llu", n, n, kvadrat);

   return 0;
}