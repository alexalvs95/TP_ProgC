#include <stdio.h>

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main() {
    struct Couleur tab[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x10, 0x20, 0x30, 0xff},
        {0xaa, 0xbb, 0xcc, 0xff},
        {0x00, 0xff, 0x88, 0xff},
        {0xff, 0x00, 0x44, 0xff},
        {0x11, 0x22, 0x33, 0xff},
        {0x77, 0x88, 0x99, 0xff},
        {0x01, 0x80, 0xf0, 0xff},
        {0xde, 0xad, 0xbe, 0xff}
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", tab[i].r);
        printf("Vert  : %d\n", tab[i].g);
        printf("Bleu  : %d\n", tab[i].b);
        printf("Alpha : %d\n\n", tab[i].a);
    }

    return 0;
}
