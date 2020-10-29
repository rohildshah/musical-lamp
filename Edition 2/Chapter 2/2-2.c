#include <stdio.h>

#define MAXLEN 1000

int main() {
    int c, i, lim;
    char s[MAXLEN];

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            break;
        }
        if (i < lim - 1) {
            s[i++] = c;
        }
    }

    // for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; i++) {
    //     s[i] = c;
    // }
}