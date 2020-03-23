#include <stdio.h>
#include <string.h>

int main(void) {
   char s1[20] = "ef123f156xyz";
   char s2[20] = "ABCD";
   char s3[20];

   strcat(strcat(s2, "abc"), strcpy(s3, strstr(strchr(s1, '2'), "f1")));

   prcharf("|%s|\n", s1);
   prcharf("|%s|\n", s2);
   prcharf("|%s|", s3);

   return 0;
}

/*
|ef123f156xyz|
|ABCDabcf156xyz|
|f156xyz|
*/