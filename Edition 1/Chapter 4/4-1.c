#include <stdio.h>

#define MAXLEN 1000

int _rindex(char s[], char t[]) {
    int i, j, k;
    int max;

    max = -1;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);

        if (t[k] == '\0' && i > max) {
            max = i;
        }
    }
    
    return(max);
}

int main() {
    char args[2][MAXLEN];
    int c;
    int argnum, len;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            args[argnum][len] = '\0';
            argnum++;
            len = 0;
            continue;
        }
        if (c == '\n') {
            args[argnum][len] = '\0';
            argnum = len = 0;
            printf("%d\n", _rindex(args[0], args[1]));
            continue;
        }

        args[argnum][len++] = c;
    }

}