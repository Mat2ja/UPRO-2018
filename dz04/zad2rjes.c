#include <stdio.h>
int main(void) {
int a, b;
printf("Upisite dva cijela broja > ");
scanf("%d %d", &a, &b);
if (a == b) {
printf("Brojevi su jednaki\n");
printf("a = b = %d", a);
} else {
if (a > b) {
int pomocni;
pomocni = a;
a = b;
b = pomocni;
printf("Zamjena je obavljena\n");
} else {
printf("Zamjena nije obavljena\n");
}
printf("a = %d, b = %d", a, b);
}
return 0;