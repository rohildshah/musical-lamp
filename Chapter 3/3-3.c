#include <stdio.h>

#define MAXLEN 1000

void reverse(char s[]) {
    int i, j, len, c;

    for (len = 0; s[len] != '\0'; len++);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, char s[]) {
    int i, sign;

    if ((sign = n) < 0) {
        n = -n;
    }

    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

int main() {
    int c, n;
    char s[MAXLEN];

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            itoa(n, s);
            printf("%s\n", s);
            n = 0;
            continue;
        }
        n = 10 * n + (c - '0');
    }
}