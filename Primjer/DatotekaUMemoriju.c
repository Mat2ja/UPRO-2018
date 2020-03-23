#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#define MAX 512
int main(void) {
    char **p = NULL, **pom;
    char redak[MAX];
    FILE *f;
    int n = 0, l, i;
    f = fopen("main.c", "r"); 
    if (f == NULL) {
        perror("Greçka kod otvaranja");
        return EXIT_FAILURE;
    }
    while (1) {
        pom = realloc (p, (n + 1) * sizeof(*p)); // pronaÐi mjesta za sljede†i pokazivaŸ
        if (pom == NULL) {
            perror("Greçka kod realokacije");
            return EXIT_FAILURE;
        }
        p = pom; 
        if (fgets(redak, MAX, f) == NULL) break;  // Ÿita se sljede†i redak u pomo†no polje
        l = strlen(redak);
        redak[l-1] = '\0';  // fgets na pretposljednje mjesto ugraÐuje /n pa ga treba ukloniti
        p[n] = malloc(l);  // niz je skra†en za jedan ali treba osigurati mjesta za \0
        if (p[n] == NULL) {
            perror("Greçka kod alokacije");
            return EXIT_FAILURE;
        }
        strcpy(p[n], redak);  //kopira se redak u rezerviranu memoriju
        n++;
    }
    fclose(f);
    // kontrolni ispis
    for (i = 0; i < n; i++) {
        printf("|%s|\n", p[i]);
    }
    // oslobaÐanje memorije rezervirane za pojedinaŸne retke
    for (i = 0; i < n; i++) {
        free(p[i]);
    }    
    // oslobaÐanje memorija rezervirane za polje pokazivaŸa
    free(p);
    return EXIT_SUCCESS;
}
