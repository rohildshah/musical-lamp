#include <stdio.h>

#define YES 1
#define NO  0

int main() {
    char c;
    int inword, pinword = NO;

    while ((c = getchar()) != EOF) {
        inword = (c != ' ' && c != '\t' && c != '\n') ? YES : NO;
        printf("%c", inword == YES ? c : '\n');
    }
}