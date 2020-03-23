#include <stdio.h>
#include <stdlib.h>
int main(void) {
    FILE *fi, *fo;
    fi = fopen("in.txt", "r"); 
    fo = fopen("out.txt", "w");
    char c;
    while ((c = fgetc(fi)) != EOF) {
        fputc(c, fo);
    }
    fclose(fi);
    fclose(fo);
    return EXIT_SUCCESS;    
}