#include <stdio.h>

#define MAXLEN 1000
#define MINLEN 10

int lineget(char line[], int lim) {
    int c, i;

    // OLD
    // for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; i++) {
    //     s[i] = c;
    // }

    for (i = 0; !(i >= lim - 1 || (c = getchar()) == '\n' || c == EOF); i++) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    return(i);
}

int main() {
    char c;
    int len;
    char line[MAXLEN];
    
    while ((len = lineget(line, MAXLEN)) > 0) {
        if (len > MINLEN) {
            printf("%s", line);
        }
    }
}