#include <stdio.h>

// :( can't debug this because terminal fills in all empty space with the space character
// cannot test whether or not trailing whitespace is being removed :(

#define MAXLEN 1000

int main() {
    int c, lastchar, len;
    int i;
    char s[MAXLEN];

    len = lastchar = 0;
    while ((c = getchar()) != EOF) {
        if (c != '\n' && c != '\t' && c != ' ') {
            lastchar = len;
        }
        if (c == '\n' && lastchar != 0) {
            for (i = 0; i <= lastchar; i++) {
                printf("%c", s[i]);
            }
            len = lastchar = 0;
            printf("\n");
            continue;
        }

        s[len++] = c;
    }
}