#include <stdio.h>

int main() {
    int compteur = 8;

    printf("Entrez une valeur pour compteur (strictement < 10) : ");
    scanf("%d", &compteur);

    if (compteur >= 10 || compteur < 1) {
        printf("Valeur invalide. Elle doit être entre 1 et 9.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 1 || i == 2 || i == compteur) {
                printf("* ");
            } else {
                if (j == 1 || j == i) {
                    printf("* ");
                } else {
                    printf("# ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
