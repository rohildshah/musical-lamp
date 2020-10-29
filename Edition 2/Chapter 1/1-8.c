#include <stdio.h>

int main() {
    int c;
    int nblank, ntab, nline;

    nblank = ntab = nline = 0;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\n':
                nline++;
                break;
            case '\t':
                ntab++;
                break;
            case ' ':
                nblank++;
                break;
        }
    }

    printf("# of blanks: %d\n# of tabs: %d\n# of lines: %d\n", nblank, ntab, nline);
}