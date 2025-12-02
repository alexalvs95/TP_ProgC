#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int recherche;
    int trouve = 0;

    srand(time(NULL));

    // Remplissage du tableau avec des entiers aléatoires entre -50 et 99
    for (int i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 150) - 50;
    }

    printf("Tableau :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    for (int i = 0; i < TAILLE; i++) {
        if (tab[i] == recherche) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
