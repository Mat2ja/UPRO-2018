#include <stdio.h>
int main (void) {
   float a, b;
   char op;
   scanf ("%f %c %f", &a, &op, &b);
   switch (op) {
   case '+':
      printf ("%f\n", a + b);
      break;
   case '-':
      printf ("%f\n", a - b);
      break;
   case '/':
      printf ("%f\n", a / b);
      break;
   case '*':
      printf ("%f\n", a * b);
      break;
   default:
      printf ("Nepoznati operator %c\n", op);
   }
   return 0;
}
