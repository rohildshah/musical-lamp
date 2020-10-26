#include <stdio.h>

#define MAXLINE 1000

void squeeze(char s1[], char s2[]) {
    int i, j, k, same;

    k = 0;
    for (i = 0; s1[i] != '\0'; i++) {
        same = 0;
        for (j = 0; s2[j] != '\0'; j++) {
            same = (s1[i] == s2[j]) || same;
        }
        if (!same) {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
    printf("%s\n", s1);
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
            squeeze(args[0], args[1]);
            argnum = pos = 0;
            continue;
        }

        args[argnum][pos] = c;
        pos++;
    }
}