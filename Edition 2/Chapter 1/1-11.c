#include <stdio.h>

#define IN   1  // inside a word
#define OUT  0  // outside a word

// You may use the following lines to test the program
// "" > 0 0 0
// "\n" > 1 0 1
// "hello, world\t\n" > 1 2 14

int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}