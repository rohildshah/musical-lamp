#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            printf("\\n\n");
            continue;
        } else if (c == '\t') {
            printf("\\t");
            continue;
        } else if (c == '\\') {
            printf("\\\\");
            continue;
        }

        printf("%c", c);
    }
}