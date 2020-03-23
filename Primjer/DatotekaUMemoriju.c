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
        perror("Gre�ka kod otvaranja");
        return EXIT_FAILURE;
    }
    while (1) {
        pom = realloc (p, (n + 1) * sizeof(*p)); // prona�i mjesta za sljede�i pokaziva�
        if (pom == NULL) {
            perror("Gre�ka kod realokacije");
            return EXIT_FAILURE;
        }
        p = pom; 
        if (fgets(redak, MAX, f) == NULL) break;  // �ita se sljede�i redak u pomo�no polje
        l = strlen(redak);
        redak[l-1] = '\0';  // fgets na pretposljednje mjesto ugra�uje /n pa ga treba ukloniti
        p[n] = malloc(l);  // niz je skra�en za jedan ali treba osigurati mjesta za \0
        if (p[n] == NULL) {
            perror("Gre�ka kod alokacije");
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
    // osloba�anje memorije rezervirane za pojedina�ne retke
    for (i = 0; i < n; i++) {
        free(p[i]);
    }    
    // osloba�anje memorija rezervirane za polje pokaziva�a
    free(p);
    return EXIT_SUCCESS;
}
