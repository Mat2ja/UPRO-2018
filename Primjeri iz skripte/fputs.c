#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80
int main(void) {
    FILE *fi, *fo;
    fi = fopen("in.txt", "r");
    fo = fopen("out.txt", "w");
    char redak[MAX];
    while (fgets(redak, MAX, fi) != NULL) {
        fputs(redak, fo);
    }
    fclose(fi);
    fclose(fo);
    return EXIT_SUCCESS;    
}