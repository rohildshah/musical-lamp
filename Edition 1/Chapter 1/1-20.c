#include <stdio.h>

#define MAXLINE 1000
#define TAB 8
#define YES 1
#define NO 0

int main() {
    int len, blankcount, i, inword;
    char c;
    char line[MAXLINE];

    blankcount = len = 0;
    inword = YES;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            line[len] = '\0';
            printf("%s\n", line);
            len = 0;
            continue;
        }
        if (c == '\t') {
            blankcount += TAB - (len % TAB);
            inword = NO;
            continue;
        }
        if (c == ' ') {
            blankcount++;
            inword = NO;
            continue;
        }
        if (inword == NO) {
            for (i = 0; i < blankcount / TAB; i++) {
                line[len++] = '\t';
            }
            for (i = 0; i < blankcount % TAB; i++) {
                line[len++] = ' ';
            }
            blankcount = 0;
            inword = YES;
        }
        line[len] = c;
        len++;
    }
}