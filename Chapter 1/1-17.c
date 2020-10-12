#include <stdio.h>

#define MAXLEN 1000

void reverse(char line[], int len) {
    int i;

    for (i = len - 1; i >= 0; i--) {
        printf("%c", line[i]);
    }
    printf("\n");
}

int main() {
    char c;
    char line[MAXLEN];
    int len;

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            reverse(line, len);
            len = 0;
            continue;
        }
        line[len] = c;
        len++;
    }
}