#include <stdio.h>
#include <limits.h>


int main() {
    signed char sc;
    sc = SCHAR_MIN;
    printf("Signed char min: %d\n", sc);
    sc = SCHAR_MAX;
    printf("Signed char max: %d\n\n", sc);

    unsigned char uc;
    uc = 0;         // UCHAR_MIN does not exist because unsigned min is always 0
    printf("Unsigned char min: %d\n", uc);
    uc = UCHAR_MAX;
    printf("Unsigned char max: %d\n\n", uc);

    signed short int ssi;
    ssi = SHRT_MIN;
    printf("Signed short min: %d\n", ssi);
    ssi = SHRT_MAX;
    printf("Signed short max: %d\n\n", ssi);

    unsigned short int usi;
    usi = 0;
    printf("Unsigned short min: %u\n", usi);
    usi = USHRT_MAX;
    printf("Unsigned short max: %u\n\n", usi);

    signed int si;
    si = INT_MIN;
    printf("Signed int min: %d\n", si);
    si = INT_MAX;
    printf("Signed int max: %d\n\n", si);

    unsigned int ui;
    ui = 0;
    printf("Unsigned int min: %u\n", ui);
    ui = UINT_MAX;
    printf("Unsigned int max: %u\n\n", ui);

    signed long int sli;
    sli = LONG_MIN;
    printf("Signed long min: %ld\n", sli);
    sli = LONG_MAX;
    printf("Signed long max: %ld\n\n", sli);

    unsigned long int uli;
    uli = 0;
    printf("Signed long min: %lu\n", uli);
    uli = ULONG_MAX;
    printf("Signed long max: %lu\n\n", uli);
}