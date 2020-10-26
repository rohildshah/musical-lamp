#include <stdio.h>

#define YES 1
#define NO 0

/* You can test using the following edge cases:
 * "" > 0 0 0
 * "\n" > 1 0 1
 * "Hello, how are you doing?\nI am doing well." > 2 9 43
*/

int main() {    /* count lines, words, chars in input */
    int c, nl, nw, nc, inword;

    inword = NO;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n') {
            nl++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            inword = NO;
        } else if (inword == NO) {
            inword = YES;
            nw++;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}