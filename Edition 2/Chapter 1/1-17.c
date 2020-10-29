#include <stdio.h>

#define MAXLINE 1000

int main() {
    int c, len;
    char s[MAXLINE];

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (len > 80) {
                s[len] = '\0';
                printf("%s\n", s);
            }
            len = 0;
            continue;
        }
        
        s[len++] = c;
    }
}