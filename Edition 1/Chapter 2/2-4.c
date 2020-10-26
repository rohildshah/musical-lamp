#include <stdio.h>

#define MAXLINE 1000

int anySearch(char s1[], char s2[]) {
    int i, j, min;

    min = MAXLINE;
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j] && i < min) {
                min = i;
            }
        }
    }
    if (min == MAXLINE) {
        min = -1;
    }
    return(min);
}

int main() {
    char args[2][MAXLINE];
    int c, argnum, pos;

    argnum = pos = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            args[argnum][pos] = '\0';
            argnum++;
            pos = 0;
            continue;
        }
        if (c == '\n') {
            args[argnum][pos] = '\0';
            printf("%d\n", anySearch(args[0], args[1]));
            argnum = pos = 0;
            continue;
        }

        args[argnum][pos] = c;
        pos++;
    }
}