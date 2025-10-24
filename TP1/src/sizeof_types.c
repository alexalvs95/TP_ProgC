#include <stdio.h>

int main(void) {
    printf("Taille des types de base en octets :\n\n");

    printf("signed char       : %zu octet(s)\n", sizeof(signed char));
    printf("unsigned char     : %zu octet(s)\n\n", sizeof(unsigned char));
    printf("signed short      : %zu octet(s)\n", sizeof(signed short));
    printf("unsigned short    : %zu octet(s)\n\n", sizeof(unsigned short));
    printf("signed int        : %zu octet(s)\n", sizeof(signed int));
    printf("unsigned int      : %zu octet(s)\n\n", sizeof(unsigned int));
    printf("signed long int   : %zu octet(s)\n", sizeof(signed long int));
    printf("unsigned long int : %zu octet(s)\n\n", sizeof(unsigned long int));
    printf("signed long long int   : %zu octet(s)\n", sizeof(signed long long int));
    printf("unsigned long long int : %zu octet(s)\n\n", sizeof(unsigned long long int));
    printf("float             : %zu octet(s)\n", sizeof(float));
    printf("double            : %zu octet(s)\n", sizeof(double));
    printf("long double       : %zu octet(s)\n", sizeof(long double));

    return 0;
}
