#include <stdio.h>

int main() {
    char c;
    char pc = 'a';

    while ((c = getchar()) != EOF) {
        if ((c == ' ' || c == '\t' || c == '\n') && c == pc) {
            continue;
        }
        printf("%c", c);
        pc = c;
    }
}