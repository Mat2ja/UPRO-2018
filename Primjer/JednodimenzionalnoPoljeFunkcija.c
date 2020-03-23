#include <stdio.h>
void udvostruci(int *p, int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(p+i) = *(p+i) * 2;
    }
}
int suma(int p[], int n) {
    int suma = 0, i;
    for (i = 0; i < n; i++) {
        suma += p[i];
    }
    return suma;
}
int najveci(int n, int p[n]) {
    int r = p[0], i;
    for (i = 1; i < n; i++) {
        if (p[i] > r) {
            r = p[i];
        }
    }
    return r;
}
int najvecip(int n, int p[n]) {
    int r = *p, i;
    for (i = 1, p++; i < n; i++, p++) {
        if (*p > r) {
            r = *p;
        }
    }
    return r;
}
int f(volatile int i) {
    i++;
    return i+1;
}
int main(void) {
    printf ("%d\n", f(3));
    int a[] = {1, 2, 3};
    int b[] = {3, 4, 5, 6};
    printf ("%d %d\n", suma(a, 3), suma(b, 4));
    udvostruci(a, 3);
    printf ("%d\n", najvecip(4, b));
    for (int i=0; i < sizeof(a)/sizeof(a[0]); i++) {
        printf ("%d ", a[i]);
    }
}
