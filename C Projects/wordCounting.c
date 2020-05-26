#include <stdio.h>
// 5-25-20


#define YES 1
#define NO 0

int main() {                        //counts lines, words, and characters from stdin input
    int input = getchar();
    if (input == '1') {
        int c, nl, nw, nc, inword;

        inword = NO;
        nl = nw = nc = 0;
        while ((c = getchar()) != '$') {
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

        printf("%d lines, %d words, %d characters.\n", nl, nw, nc);

    } else if (input == '2') {          //prints stdin line by line for each new word
       int nchar;
       int pchar = 0;
       
        while ((nchar = getchar()) != '$') {

            if (nchar == ' ' && pchar != ' ') {
                printf("\n");
            } else if (nchar != ' ') {
                putchar(nchar);
            }
            pchar = nchar;
       }
    }

    return 0;
}