#include <stdio.h>

int main() {
    short s = 0x0302;
    int i = 0x04030201;
    long int li = 0x0807060504030201;
    float f = 12.5f;
    double d = 3.14;
    long double ld = 1.23L;

    unsigned char *p;

    // Short
    p = (unsigned char*)&s;
    printf("Octets de short :\n");
    for (size_t j = 0; j < sizeof(s); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Int
    p = (unsigned char*)&i;
    printf("Octets de int :\n");
    for (size_t j = 0; j < sizeof(i); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Long int
    p = (unsigned char*)&li;
    printf("Octets de long int :\n");
    for (size_t j = 0; j < sizeof(li); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Float
    p = (unsigned char*)&f;
    printf("Octets de float :\n");
    for (size_t j = 0; j < sizeof(f); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Double
    p = (unsigned char*)&d;
    printf("Octets de double :\n");
    for (size_t j = 0; j < sizeof(d); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Long double
    p = (unsigned char*)&ld;
    printf("Octets de long double :\n");
    for (size_t j = 0; j < sizeof(ld); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n");

    return 0;
}
