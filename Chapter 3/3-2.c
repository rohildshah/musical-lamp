#include <stdio.h>

#define MAXLEN 1000

// Basic functionality complete, too many edge cases to consider
// Need new way of approaching the problem
void expand(char s1[], char s2[]) {
    int i, j;
    int pos;

    pos = 0;
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == '-' && i != 0 && s1[i + 1] != '\0') {
            for (j = s1[i - 1]; j <= s1[i + 1]; j++) {
                s2[pos++] = j;
            }
        }
    }

    s2[pos] = '\0';
}

int main() {
    char s1[MAXLEN], s2[MAXLEN];
    int c, len;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            s1[len] = '\0';
            expand(s1, s2);
            printf("%s\n", s2);
            len = 0;
            continue;
        }

        s1[len] = c;
        len++;
    }
}