#include <stdio.h>

#define MAXLEN 1000

int getbits(unsigned x, unsigned p, unsigned n) {
    return((x >> (p + 1 - n)) & ~(~0 << n));
}

int main() {
    int c, b, argnum;
    int args[3] = {0, 0, 0};

    argnum = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            argnum++;
            continue;
        }
        if (c == '\n') {
            printf("%d\n", getbits(args[0], args[1], args[2]));
            argnum = 0;
            args[0] = args[1] = args[2] = 0;
            continue;
        }

        b = c - '0';
        args[argnum] = 10 * args[argnum] + b;
    }
}