#include <stdio.h>

int main() {
    int count = 0;
    char c;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            count++;
        }
    }
    printf("There were %d newlines, tabs, or spaces in your sentence.\n", count);
}