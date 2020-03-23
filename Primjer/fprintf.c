#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80
int main(void) {
    char redak[MAX+1];
    char format[MAX+1];
    FILE *fi, *fo;
    printf ("%d\n", isprint('\n'));
    fi = fopen("in.txt", "r");
    fo = fopen("out.txt", "w");
    sprintf (format, "%%%d[^\\n]%%*c", MAX);
    while (fscanf(fi, format, redak) == 1) {
        fprintf(fo, "%s\n", redak);
    }
    fclose(fi);
    fclose(fo);

    return EXIT_SUCCESS;    
}