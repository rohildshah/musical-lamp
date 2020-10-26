#include <stdio.h>

int rightrot(n, b) {
    return((n >> b) | (n << (32 - b)));
}


int main() {
    int c, argnum;
    int args[2] = {0, 0};

    argnum = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            argnum++;
            continue;
        }
        if (c == '\n') {
            printf("%u\n", rightrot(args[0], args[1]));
            args[0] = args[1] = 0;
            argnum = 0;
            continue;
        }

        args[argnum] = 10 * args[argnum] + (c - '0');
    }
}