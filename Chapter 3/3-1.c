#include <stdio.h>

#define MAXLEN 1000

void expand(char s[], char t[]) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++, j++) {
        switch (s[i]) {
            case '\n':
                t[j] = '\\';
                t[++j] = 'n';
                break;
            case '\t':
                t[j] = '\\';
                t[++j] = 't';
                break;
            default:
                t[j] = s[i];
                break;
        }
    }
    t[j] = '\0';
}

int main() {
    char s[MAXLEN], t[MAXLEN];
    int c, len;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            s[len] = c;
            s[len + 1] = '\0';
            expand(s, t);
            printf("%s\n", t);
            len = 0;
            continue;
        }

        s[len] = c;
        len++;
    }

}