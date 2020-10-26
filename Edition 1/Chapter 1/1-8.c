#include <stdio.h>

int main() {
    char c;

    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == '\b') {
            printf(c == '\t' ? ">" : "<");
            continue;
        }
        printf("%c", c);
    }
}