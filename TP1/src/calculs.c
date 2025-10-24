#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Entrez le premier entier : ");
    scanf("%d", &num1);

    printf("Entrez le deuxieme entier : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); // espace avant %c pour ignorer un caractère résiduel

    switch (op) {
        case '+':
            printf("Resultat: %d\n", num1 + num2);
            break;

        case '-':
            printf("Resultat: %d\n", num1 - num2);
            break;

        case '*':
            printf("Resultat: %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Resultat: %d\n", num1 / num2);
            else
                printf("Erreur: division par zero impossible.\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Resultat: %d\n", num1 % num2);
            else
                printf("Erreur: modulo par zero impossible.\n");
            break;

        case '&':
            printf("Resultat (ET bit a bit): %d\n", num1 & num2);
            break;

        case '|':
            printf("Resultat (OU bit a bit): %d\n", num1 | num2);
            break;

        case '~':
            printf("Resultat (~ applique uniquement sur num1): %d\n", ~num1);
            break;

        default:
            printf("Operateur invalide !\n");
    }

    return 0;
}


