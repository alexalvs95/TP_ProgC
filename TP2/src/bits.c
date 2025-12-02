#include <stdio.h>

int main() {
    unsigned int d = 0x00F00000; // valeur à tester (modifiable)

    int bit4  = (d >> 27) & 1;   // 4ème bit en partant de la gauche (bit 28)
    int bit20 = (d >> 11) & 1;   // 20ème bit en partant de la gauche (bit 12)

    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}
