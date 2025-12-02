#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Fonction pour trier le tableau (tri à bulles pour simplicité)
void trier_tableau(int tab[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

// Fonction de recherche dichotomique
int recherche_dichotomique(int tab[], int n, int valeur) {
    int gauche = 0;
    int droite = n - 1;

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;
        if (tab[milieu] == valeur) {
            return 1; // trouvé
        } else if (tab[milieu] < valeur) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }
    return 0; // non trouvé
}

int main() {
    int tab[TAILLE];
    int recherche;

    srand(time(NULL));

    // Remplissage du tableau avec des entiers aléatoires
    for (int i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 200) - 50; // valeurs entre -50 et 149
    }

    // Tri du tableau
    trier_tableau(tab, TAILLE);

    printf("Tableau trié :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &recherche);

    if (recherche_dichotomique(tab, TAILLE, recherche)) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
