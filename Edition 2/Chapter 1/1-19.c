#include <stdio.h>

#define MAXLEN 1000

void reverse(char s[]) {
    int i, j, len;
    int temp;

    for (len = 0; s[len + 1] != '\0'; len++);

    for (i = 0, j = len; i < (len / 2) + 1; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    int c, len;
    char s[MAXLEN];

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            s[len] = '\0';
            len = 0;
            reverse(s);
            printf("%s\n", s);
            continue;
        }

        s[len++] = c;
    }

}