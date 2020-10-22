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

void itoh(unsigned n, char s[]) {
    int i;

    for (i = 0; n > 0; n /= 16) {
        s[i++] = n % 16 > 9 ? n % 16 + '7' : n % 16 + '0';
    }
    s[i] = '\0';
    reverse(s);
}

int main() {
    int c;
    unsigned n;
    char s[MAXLEN];
    
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            itoh(n, s);
            printf("%s\n", s);
            n = 0;
            continue;
        }
        n = 10 * n + (c - '0');
    }

}