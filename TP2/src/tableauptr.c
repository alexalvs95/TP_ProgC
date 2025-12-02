#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tabI[11];
    float tabF[11];

    srand(time(NULL));

    int *pI = tabI;
    float *pF = tabF;

    for (int i = 0; i < 11; i++) {
        *(pI + i) = rand() % 200;
        *(pF + i) = (rand() % 1000) / 100.0f;
    }

    printf("Tableau d'entiers AVANT :\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", *(pI + i));
    }

    printf("\n\nTableau de floats AVANT :\n");
    for (int i = 0; i < 11; i++) {
        printf("%.2f ", *(pF + i));
    }

    for (int i = 0; i < 11; i += 2) {
        *(pI + i) *= 3;
        *(pF + i) *= 3;
    }

    printf("\n\nTableau d'entiers APRES :\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", *(pI + i));
    }

    printf("\n\nTableau de floats APRES :\n");
    for (int i = 0; i < 11; i++) {
        printf("%.2f ", *(pF + i));
    }

    printf("\n");

    return 0;
}
