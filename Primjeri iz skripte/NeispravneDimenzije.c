#include <stdio.h>
void f(int m, int n, int a[][n]) {
    printf("%d", a[1][1]);
}
int main(void) {
    int m=3, n=2;
    int a[m][n];
    a[0][0] = 1;
    a[0][1] = 2;
    a[1][0] = 3;
    a[1][1] = 4;
    a[2][0] = 5;
    a[2][1] = 6;
    f(2,3,a);
}