#include <stdio.h>
#include <sys/timeb.h>
int main(void) {
   struct timeb t1, t2;
   int sum = 0;
   int i, j;
   ftime (&t1);
   for (j = 0; j < 10000; j++) {
      sum = 0;
      for (i = 0; i < 1000; i++) {
         sum += i;
      }
   }
   ftime(&t2);
   printf ("%d\n", t2.time*1000 + t2.millitm - (t1.time*1000 + t1.millitm));
   printf ("%d\n", sum);
   return 0;
}
/*
X
from timeit import default_timer as timer

start = timer()

2.86
sum = 0
for x in range(1, 10000000, 1):
   sum = sum + x
end = timer()

3.80
x = 1
while x < 10000000:
   sum = sum + 1
   x = x + 1

print(end - start)
print(sum)


C: 0.066 -g
   0.024 -O1
   0 -O2 i O3
*/
