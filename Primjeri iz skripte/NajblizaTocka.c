#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define MAX 1000
struct tocka { 
   double x;
   double y;
} ;
double udaljenost(struct tocka t1, struct tocka t2) {
   return sqrt(pow(t1.x-t2.x, 2) + pow(t1.y-t2.y, 2));
}
struct tocka najbliza(int n, struct tocka a[]) {
   struct tocka ishodiste = {0, 0};
   double d, mind;
   int pos = 0;
   mind = udaljenost(a[0], ishodiste);
   for (int i = 1; i < n; i++) {
      d = udaljenost(a[i], ishodiste);
      if(d < mind) {
         mind = d;
         pos = i;
      }
   }
   return a[pos];
}
int main(void) {
   struct tocka a[MAX], r;
   srand(time(NULL));
   int i;
   for (i = 0; i < MAX; i++) {
      a[i].x = rand() / 10000.;
      a[i].y = rand() / 10000.;
   }
   r = najbliza(MAX, a);
   printf("%f %f\n", r.x, r.y);
}