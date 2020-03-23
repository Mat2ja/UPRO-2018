#include <stdio.h>
#include <math.h>
struct pravac {
   double a;
   double b;
};
struct tocka { 
   double x;
   double y;
};
struct tocka sjeciste(struct pravac p1, struct pravac p2) {
   struct tocka s;
   s.x = (p2.b - p1.b) / (p1.a - p2.a);
   s.y = p1.a * s.x + p1.b;
   return s;
}
int main(void) {
   struct tocka s;
   struct pravac p1, p2;
   printf ("%d\n", sizeof (s), sizeof (struct tocka));
   scanf("%lf%lf%lf%lf", &p1.a, &p1.b, &p2.a, &p2.b);
   s = sjeciste (p1, p2);
   if (s.x == INFINITY || s.x == -INFINITY) {
      printf ("Pravci su paralelni\n");
   } else {
      printf ("Pravci se sijeku u točki (%g,%g)\n", s.x, s.y);
   }
}