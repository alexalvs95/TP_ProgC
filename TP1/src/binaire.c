#include <stdio.h>

void afficherBinaire(int nombre) {
    int i;
    int bitTrouve = 0;

    for (i = 31; i >= 0; i--) {
        int bit = (nombre >> i) & 1; 

        if (bit == 1) {
            bitTrouve = 1; 
        }
        if (bitTrouve) {
            printf("%d", bit);
        }
    }
    if (!bitTrouve) {
        printf("0");
    }
}

int main() {
    int tests[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < taille; i++) {
        printf("Nombre : %d -> Binaire : ", tests[i]);
        afficherBinaire(tests[i]);
        printf("\n");
    }

    return 0;
}
