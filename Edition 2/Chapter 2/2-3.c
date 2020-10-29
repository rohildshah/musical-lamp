#include <stdio.h>
#include <ctype.h>

#define MAXLEN 1000

int _htoi(char s[]) {
    int i, n;

    for (i = 0; s[i] == '0' || s[i] == 'x' || s[i] == 'X'; i++);

    for (n = 0; s[i] != '\0'; i++) {
        if (!isdigit(s[i])) {
            s[i] = s[i] >= 'a' ? s[i] - 39 : s[i] - 7;
        }
        n = 16 * n + (s[i] - '0');
    }

    return n;
}

int main() {
    int c, len;
    char s[MAXLEN];

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            s[len] = '\0';
            len = 0;
            printf("%d\n", _htoi(s));
            continue;
        }

        s[len++] = c;
    }
}