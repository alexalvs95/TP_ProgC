#include <stdio.h>

int main() {
    char phrases[10][100] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char recherche[100];
    int trouve = 0;

    printf("Entrez la phrase à rechercher :\n");
    fgets(recherche, sizeof(recherche), stdin);

    // Supprimer le caractère de nouvelle ligne '\n' si présent
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
        i++;
    }

    for (int i = 0; i < 10; i++) {
        int j = 0;
        while (phrases[i][j] != '\0' && recherche[j] != '\0' && phrases[i][j] == recherche[j]) {
            j++;
        }
        if (phrases[i][j] == '\0' && recherche[j] == '\0') {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}

