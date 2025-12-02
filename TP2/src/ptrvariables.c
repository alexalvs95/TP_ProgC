#include <stdio.h>

int main() {
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x11223344;
    long long int lli = 0x1122334455667788;
    float f = 1.0f;
    double d = 3.14;
    long double ld = 2.718281828459;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("AVANT MANIPULATION :\n");
    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc,  (unsigned char)c);
    printf("Adresse de s  : %p, Valeur : %04hx\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi,  (unsigned int)i);
    printf("Adresse de li : %p, Valeur : %08lx\n", (void*)pli, li);
    printf("Adresse de lli: %p, Valeur : %016llx\n", (void*)plli, lli);

    union { float f; unsigned int u; } uf;
    uf.f = f;
    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf, uf.u);

    union { double d; unsigned long long u; } ud;
    ud.d = d;
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, ud.u);

    printf("Adresse de ld : %p\n", (void*)pld);

    *pc  = 0xAA;
    *ps  = 0xBBBB;
    *pi  = 0xFFFFFFFF;
    *pli = 0xA1B2C3D4;
    *plli = 0xFFEEDDCCBBAA9988;
    *pf  = 2.0f;
    *pd  = 6.28;
    *pld = 1.41421356237;

    uf.f = f;
    ud.d = d;

    printf("\nAPRES MANIPULATION :\n");
    printf("Adresse de c  : %p, Valeur : %02x\n", (void*)pc,  (unsigned char)c);
    printf("Adresse de s  : %p, Valeur : %04hx\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i  : %p, Valeur : %08x\n", (void*)pi,  (unsigned int)i);
    printf("Adresse de li : %p, Valeur : %08lx\n", (void*)pli, li);
    printf("Adresse de lli: %p, Valeur : %016llx\n", (void*)plli, lli);
    printf("Adresse de f  : %p, Valeur : %08x\n", (void*)pf, uf.u);
    printf("Adresse de d  : %p, Valeur : %016llx\n", (void*)pd, ud.u);
    printf("Adresse de ld : %p\n", (void*)pld);

    return 0;
}
