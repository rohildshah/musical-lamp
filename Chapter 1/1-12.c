#include <stdio.h>

int main() {
    int i, j, c, word;
    int wordl[100];

    word = 0;
    for (i = 0; i < 100; i++) {
        wordl[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            word++;
            continue;
        }
        wordl[word]++;
    }

    for (i = 0; i < 100 && wordl[i] != 0; i++) {
        for (j = 0; j < wordl[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}