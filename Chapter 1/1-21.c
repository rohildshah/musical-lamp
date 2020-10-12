#include <stdio.h>

#define MAXLEN 80

int main() {
    char c;
    int len;

    len = 0;
    while ((c = getchar()) != EOF) {
        if (len >= MAXLEN && c != ' ' && c != '\t' && c != '\n') {
            printf("\n%c", c);
            len = 1;
            continue;
        }
        if (c == '\n') {
            len = 0;
            printf("\n");
            continue;
        }
        printf("%c", c);
        len++;
    }
}