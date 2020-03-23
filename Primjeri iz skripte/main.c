#include <stdio.h>
int main(void) {
   int i, j, k;
   scanf("%d%d%d", &i, &j, &k);
   printf("%d %d\n", i < j ? (i < k ? i : k) : (j < k ? j : k),
          i > j ? (i > k ? i : k) : (j > k ? j : k));
}
