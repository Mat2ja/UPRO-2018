#include <stdio.h>
int main(void) {
printf ("deni dva broja sim: ");
int m, n, r;
scanf("%d %d", &m, &n);
if (m > n) {
r = m;
} else {
r = n;
}
printf("%d\n", r);
return 0;
	}