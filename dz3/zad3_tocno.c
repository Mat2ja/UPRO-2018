#include <stdio.h>
int main(void) {
int a, b;
printf("Upisite dva broja > ");
scanf("%d %d", &a, &b);
if ((a > 100 && b < 100) || (a < 100 && b > 100)) {
printf("Jedan je veci, drugi je manji od 100");
}
return 0;
}