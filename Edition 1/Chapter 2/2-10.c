#include <stdio.h>

int lower(int c) {
    // Normal if
    // if (c >= 'A' && c <= 'Z') {
    //     return(c + 32);
    // }
    // return(c);

    // Ternary operator (much shorter, generally preferred)
    return(c >= 'A' && c <= 'Z' ? c + 32 : c);
}

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        printf("%c", lower(c));
    }
}