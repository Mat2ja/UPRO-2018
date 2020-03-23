#include <stdio.h>
#include <math.h>
struct tocka { 
   double x;
   double y;
} ;
double udaljenost(struct tocka t1, struct tocka t2) {
   return sqrt(pow(t1.x-t2.x, 2) + pow(t1.y-t2.y, 2));
}
int main(void) {
   struct tocka t1, t2;
   scanf("%lf%lf%lf%lf", &t1.x, &t1.y, &t2.x, &t2.y);
   printf ("%f\n", udaljenost(t1, t2));
}