#include <stdio.h>

int main() {
    char noms[5][30] = {"Dupont", "Martin", "Durand", "Bernard", "Petit"};
    char prenoms[5][30] = {"Alice", "Jean", "Marie", "Paul", "Luc"};
    char adresses[5][50] = {
        "12 rue A",
        "34 avenue B",
        "56 boulevard C",
        "78 rue D",
        "90 avenue E"
    };

    float noteProg[5] = {14.5, 12.0, 16.5, 10.0, 18.0};
    float noteSys[5]  = {13.0, 11.5, 15.0, 9.0, 17.5};

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.2f\n", noteProg[i]);
        printf("Note Système d'exploitation : %.2f\n", noteSys[i]);
        printf("\n");
    }

    return 0;
}
