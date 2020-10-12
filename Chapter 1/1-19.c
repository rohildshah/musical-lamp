#include <stdio.h>

#define MAXLINE 1000
#define TAB 8

int main() {
    char c;
    int len, i, spaces;
    char line[MAXLINE];

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            spaces = TAB - (len % TAB);
            for (i = 1; i <= spaces; i++) {
                line[len++] = ' ';
            }
            continue;
        }
        if (c == '\n') {
            line[len] = '\0';
            printf("%s\n", line);
            len = 0;
            continue;
        }
        line[len] = c;
        len++;
    }

}