#include <stdio.h>

#define MAXLINE 1000

char line[MAXLINE];
char save[MAXLINE];
int max;

int lineget() {
    int c, len;
    extern char line[];
    
    len = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        line[len] = c;
        len++;
        if (len >= MAXLINE - 1) {
            break;
        }
    }

    if (c == '\n') {
        line[len] = c;
        len++;
    }
    line[len] = '\0';
    return (len);
}

void copy() {
    int i;
    extern char line[], save[];

    i = 0;
    while ((save[i] = line[i]) != '\0') {
        i++;
    }
}

int main()  {
    int len;
    extern int max;
    extern char save[];

    max = 0;
    while ((len = lineget()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }
    if (max > 0) {
        printf("%s", save);
    }
}