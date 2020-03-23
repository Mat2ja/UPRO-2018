#include <stdio.h>
#define PI 3.141592f
int main(void) {
printf("Upisi neki radijus > "); // moj dodatak
float r; // polumjer kruga
scanf("%f", &r);
printf("Povrsina kruga: %f\n", r * r * PI);
printf("Opseg kruga: %f", 2 * r * PI);
return 0;
}