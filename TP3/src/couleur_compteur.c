#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int couleurs_egales(struct Couleur c1, struct Couleur c2) {
    return c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a;
}

int main() {
    struct Couleur tab[TAILLE];
    struct Couleur distinctes[TAILLE];
    int compte[TAILLE] = {0};
    int nb_distinctes = 0;

    srand(time(NULL));

    // Remplissage aléatoire du tableau de couleurs
    for (int i = 0; i < TAILLE; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = rand() % 256;
    }

    // Comptage des couleurs distinctes
    for (int i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for (int j = 0; j < nb_distinctes; j++) {
            if (couleurs_egales(tab[i], distinctes[j])) {
                compte[j]++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nb_distinctes] = tab[i];
            compte[nb_distinctes] = 1;
            nb_distinctes++;
        }
    }

    // Affichage des couleurs distinctes et de leurs occurrences
    for (int i = 0; i < nb_distinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n", 
               distinctes[i].r, distinctes[i].g, distinctes[i].b, distinctes[i].a, compte[i]);
    }

    return 0;
}
