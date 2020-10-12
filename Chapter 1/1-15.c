#include <stdio.h>

#define MAXLEN 1000
#define MINLEN 80

int main() {
    int len, i;
    char line[MAXLEN];
    char c;

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (len >= MINLEN) {
                line[len] = '\0';
                printf("%s\n", line);
            }
            len = 0;
            continue;
        }
        line[len] = c;
        len++;
    }
}