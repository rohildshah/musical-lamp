#include <stdio.h>

//change MAXLINE to getconf ARG_MAX
#define MAXLINE 262144

int lineget(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return (i);
}

void copy(char s1[], char s2[]) {
    int i;

    i = 0;
    while ((s2[i] = s1[i]) != '\0') {
        i++;
    }
}

int main() {    /* find longest line*/
    int len;
    int max;
    char line[MAXLINE];
    char save[MAXLINE];

    max = 0;
    while ((len = lineget(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(line, save);
        }
    }

    if (max > 0) {
        printf("The longest line was: %sIt had a length of %d characters.\n", save, max);
    }
}