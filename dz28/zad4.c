#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   FILE *ulTok = fopen("slova.bin", "rb");
   
   srand((unsigned)time(NULL));

   char c;
   int ukupnoZnakova = 'Z' - 'A' + 1 + 'z' - 'a' + 1 + '9' - '0' + 1;
   int brojIspisanih = 0;

   do {
      int slucajnaPozicija = rand() % ukupnoZnakova;

      fseek(ulTok, slucajnaPozicija, SEEK_SET);
      fread(&c, sizeof(c), 1, ulTok);
      printf("%c", c);

      ++brojIspisanih;
   } while (c != 'X' && brojIspisanih < 40);

   fclose(ulTok);

   return 0;
}