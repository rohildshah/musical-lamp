#include <stdio.h>

int invert(unsigned x, unsigned p, unsigned n) {
    return(((~(x >> (p - n + 1)) & ~(~0 << n)) << (p - n + 1)) | (x & ((~0 << (p + 1)) | (~(~0 << (p - n + 1))))));
}

int main() {
    int c, argnum;
    unsigned args[3] = {0, 0, 0};

    argnum = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            argnum++;
            continue;
        }
        if (c == '\n') {
            printf("%u\n", invert(args[0], args[1], args[2]));
            argnum = 0;
            args[0] = args[1] = args[2] = 0;
            continue;
        }

        args[argnum] = 10 * args[argnum] + (c - '0');
    }
}