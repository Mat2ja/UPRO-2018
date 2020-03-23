#include <stdio.h>
int main(void) {
int a = 14, b = -9, pom;
printf("a=%d, b=%d\n", a, b);
pom = a;
a = b;
b = pom;
printf("a=%d, b=%d", a, b);
return 0;
}