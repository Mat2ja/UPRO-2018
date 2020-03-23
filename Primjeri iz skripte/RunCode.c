#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif
int main(int argc, char *argv[]) {
    char cmd[1024+1] = "";
    char dir[1024+1];
    GetCurrentDir(dir, 1024);
    strcat (cmd, "code ");
    strcat (cmd, dir);
    strcat (cmd, " ");
    strcat (cmd, dir);
    strcat (cmd, "/");
    strcat (cmd, argv[1]);
    printf ("%s\n", cmd);
    system (cmd);
    return 0;
}
