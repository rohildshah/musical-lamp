#include <stdio.h>

int main() {
    int c, pc;

    pc = '\0';
    while ((c = getchar()) != EOF) {
        if (c == pc && (pc == ' ' || pc == '\t')) {
            continue;
        }
        printf("%c", c);

        pc = c;
    }
}