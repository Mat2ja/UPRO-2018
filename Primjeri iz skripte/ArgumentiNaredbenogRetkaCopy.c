#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXBUF 4096
int main(int argc, char *argv[]) {
   // buf se koristi za dvije namjene
   // u prvom dijelu za kostrukciju teksta greške (konkatenaciju imena datoteke)
   // u drugom dijelu za čitanje bloka datotete
   char buf[MAXBUF] = "Ne može se otvoriti datoteka ";
   FILE *fi, *fo;
   int n;
   if (argc != 3) {
      fprintf(stderr, "Neispravan broj argumenata");
      return EXIT_FAILURE;
   }
   fi = fopen(argv[1], "rb");
   if (fi == NULL) {
      perror(strcat(buf, argv[1]));
      return EXIT_FAILURE;
   }
   fo = fopen(argv[2], "wb");
   if (fi == NULL) {
      perror(strcat(buf, argv[2]));
      return EXIT_FAILURE;
   }
   // Čita se blok po blok maksimalne veličine MAXBUF
   // posljednji pročitani blok bit će manji od MAXBUF, a sljedeće čitanje vra†a
   // nulu
   while ((n = fread(buf, 1, MAXBUF, fi)) > 0) {
      fwrite(buf, n, 1, fo);
   }
   fclose(fi);
   fclose(fo);
   return EXIT_SUCCESS;
}
