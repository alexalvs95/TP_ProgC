#include <stdio.h>

int main() {
    char s1[50] = "Hello";
    char s2[50] = " World!";
    char copie[50];
    char concat[100];
    
    int i = 0, j = 0, longueur = 0;

    while (s1[longueur] != '\0') {
        longueur++;
    }

    while (s2[i] != '\0') {
        longueur++;
        i++;
    }

    i = 0;
    while (s1[i] != '\0') {
        copie[i] = s1[i];
        i++;
    }
    copie[i] = '\0';

    i = 0;
    while (s1[i] != '\0') {
        concat[i] = s1[i];
        i++;
    }

    j = 0;
    while (s2[j] != '\0') {
        concat[i] = s2[j];
        i++;
        j++;
    }
    concat[i] = '\0';

    printf("Longueur totale : %d\n", longueur);
    printf("Copie de s1 : %s\n", copie);
    printf("Concaténation : %s\n", concat);

    return 0;
}
