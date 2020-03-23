#include <stdio.h>
#include <time.h>

#define SEK_U_MIN 60
#define SEK_U_SAT (SEK_U_MIN * 60)
#define SEK_U_DAN (SEK_U_SAT * 24)

void vrijeme(int *dana, int *sati, int *minuta, int *sekundi) {
   time_t ukupno_sekundi;
   ukupno_sekundi = time(NULL); // ili time(&ukupno_sekundi);

   *dana = ukupno_sekundi / SEK_U_DAN;
   *sati = ukupno_sekundi % SEK_U_DAN / SEK_U_SAT;
   *minuta = ukupno_sekundi % SEK_U_SAT / SEK_U_MIN;
   *sekundi = ukupno_sekundi % SEK_U_MIN;

   return;
}

int main(void) {
   int dana, sati, minuta, sekundi;

   vrijeme(&dana, &sati, &minuta, &sekundi);

   printf("Od 00:00:00-1.1.1970(UTC) proteklo je:\n");
   printf("   Dana: %5d\n", dana);
   printf("   Sati: %5d\n", sati);
   printf(" Minuta: %5d\n", minuta);
   printf("Sekundi: %5d\n", sekundi);

   return 0;
}