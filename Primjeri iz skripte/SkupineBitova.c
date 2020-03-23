#include <stdio.h>
#include <stdbool.h>
//#pragma pack(1)
struct character {
    char value;
    bool italic;
    bool bold;
    bool underlined;
    bool overstrike;
    char color;
};
struct packedCharacter {
    char value;
    bool italic:1;
    bool bold:1;
    bool underlined:1;
    bool overstrike:1;
    unsigned char color:4;
};
struct t1 {
    char a : 5;
    char b : 5;
    char c : 5;
    char d : 5;
    char e : 5;
    char f : 5;
    char g : 5;
    char h : 5;
    char i : 5;
    char j : 5;
    char k : 5;
    char l : 5;
};
struct t2 {
    short a : 5;
    short b : 5;
    short c : 5;
    short d : 5;
    short e : 5;
    short f : 5;
    short g : 5;
    short h : 5;
    short i : 5;
    short j : 5;
    short k : 5;
    short l : 5;
};
int main(void) {
    struct character c;
    struct packedCharacter pc;
    pc.color = 11;
    pc.italic = true;
    printf ("%d %d %d %d\n", sizeof(c), sizeof(pc), sizeof (struct t1), sizeof (struct t2));
}