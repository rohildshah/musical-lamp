#include <stdio.h>

// Given bitcount
// int bitcount(unsigned n) {
//     int b;

//     for (b = 0; n != 0; n >>= 1) {
//         if (n & 01) {
//             b++;
//         }
//     }

//     return(b);
// }

// Faster bitcount (written by me)
int bitcount(unsigned n) {
    int b;

    for (b = 0; n != 0; n &= (n - 1), b++);

    return(b);
}

int main() {
    int c, n;

    n = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            printf("%d\n", bitcount(n));
            n = 0;
            continue;
        }
        n = 10 * n + (c - '0');
    }
}