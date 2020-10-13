#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

int htoi(char hex[]) {
    int i, dec, b16, b10;

    dec = 0;
    for (i = 0; hex[i] != '\0'; i++) {
        b16 = tolower(hex[i]);
        if (b16 >= '0' && b16 <= '9') {
            b10 = b16 - '0';
        } else if (b16 >= 'a' && b16 <= 'f') {
            b10 = (b16 - 'a') + 10;
        } else {
            return(-1);
        }
        dec = 16 * dec + b10;
    }
    return(dec);
}

int main() {
    char line[MAXLINE];
    int c, len;

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            line[len] = '\0';
            printf("%d\n", htoi(line));
            len = 0;
            continue;
        }
        line[len] = c;
        len++;
    }
}