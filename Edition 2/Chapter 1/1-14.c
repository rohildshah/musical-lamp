#include <stdio.h>

#define NUMCHARS 97

int main() {
    int c, i;
    int freq[NUMCHARS];

    for (i = 0; i < NUMCHARS; i++) {
        freq[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            freq[NUMCHARS - 2]++;
            continue;
        } else if (c == '\n') {
            freq[NUMCHARS - 1]++;
            continue;
        }

        freq[c - 32]++;
    }

    // print raw values in crude table
    // for (i = 0; i < NUMCHARS; i++) {
    //     if (i >= NUMCHARS - 2) {
    //         printf("%s: %2d, ", i == NUMCHARS - 1 ? " \\n" : " \\t", freq[i]);
    //         continue;
    //     }
    //     printf("\'%c\': %2d, ", i + 32, freq[i]);
    //     if ((i + 1) % 10 == 0) {
    //         printf("\n");
    //     }
    // }
    // printf("\n");

    // print as histogram
    for (i = 0; i < NUMCHARS; i++) {
        if (i >= NUMCHARS - 2) {
            printf("%s  - ", i == NUMCHARS - 1 ? "\\n" : "\\t");
        } else {
            printf("\'%c\' - ", i + 32);
        }
        for (; freq[i] > 0; freq[i]--) {
            printf("#");
        }
        printf("\n");
    }
}