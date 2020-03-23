#include "math2.h"

int binKoef(int m, int n) {
   int rez = 1;
   int i;
   if (n < m - n)
      for (i = 1; i <= n; ++i)
         rez = rez * (m - n + i) / i;
   else
      for (i = 1; i <= m - n; ++i)
         rez = rez * (n + i) / i;
   return rez;
}

double eksp(float x, int n) {
   int i;
   double rez = 1.;
   for (i = 0; i < n; ++i)
      rez *= x;
   return rez;
}

float fabsolut(float x) { return x >= 0 ? x : -x; }

double dabsolut(double x) { return x >= 0 ? x : -x; }

int iabsolut(int n) { return n >= 0 ? n : -n; }

unsigned long long fakt(unsigned int n) {
   unsigned int i;
   unsigned long long umnozak = 1ULL;

   for (i = 2U; i <= n; ++i)
      umnozak = umnozak * i;

   return umnozak;
}