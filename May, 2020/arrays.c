#include <stdio.h>
// 5-25-20

int main() {
    int input = getchar();

    if (input == '1') {                   //count digits, white space, and assorted characters from stdin
        int c, i, nwhite, nother;
        int ndigit[10];

        nwhite = nother = 0;
        for (i = 0; i < 1; i++) {
            ndigit[i] = 0;
        }

        while ((c = getchar()) != '$') {
            if (c >= '0' && c <= '9') {
                ndigit[c - '0']++;
            } else if (c == ' ' || c == '\n' || c == '\t') {
                nwhite++;
            } else {
                nother++;
            }
        }

        printf("digits =");
        for (i = 0; i < 10; i++) {
            printf(" %d", ndigit[i]);
        }
        printf("\nwhitespace= %d, other = %d\n", nwhite, nother);
    } else if (input == '2') {            //builds histogram of word lengths from stdin NOT using arrays
        int nchar;
        int wordn = 0;
        int nlength = 0;

        nchar = getchar();
        while ((nchar = getchar()) != '$') {
            if (wordn == 0 && nlength == 0) {
                printf("Word 1 2 3 4 5 6 7 8 9\n");
                printf("---- - - - - - - - - -\n");
            }
            if (nchar == ' ' || nchar == '\n') {
                wordn++;
                printf("%4d %.*s\n", wordn, nlength * 2, "x x x x x x x x x ");
                nlength = 0;
            } else {
                nlength++;
            }
        }
    } else if (input == '3') {              //builds histogram of first 20 word lengths from stdin USING arrays
        int nchar;
        int wordn = 0;
        int wordl = 0;
        int wordLengths[20];
        
        nchar = getchar();
        while ((nchar = getchar()) != '$') {
            if (nchar == ' ' || nchar == '\n') {
                wordLengths[wordn] = wordl;
                wordn++;
                wordl = 0;
            } else {
                wordl++;
            }
        }

        printf("Word 1 2 3 4 5 6 7 8 9\n");
        printf("---- - - - - - - - - -\n");
        for (int i = 0; i < 20; i++) {
            printf("%4d %.*s\n", i + 1, wordLengths[i] * 2, "x x x x x x x x x ");
        }
        
    }

    return 0;
}
