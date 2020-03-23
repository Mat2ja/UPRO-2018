// a) deklaracija:
void zamijeni(int *a, int *b);

// definicija
void zamijeni(int *a, int *b) {
   int pom;

   pom = *a;
   *a = *b;
   *b = pom;

   return 0;
}

// b) poziv:
int a = 10, b = 5;

zamijeni(&a, &b);