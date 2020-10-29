#include <stdio.h>

#define MAXWORDS 20

int main() {
    int c, word, i;
    int lens[MAXWORDS];

    for (word = 0; word < MAXWORDS; word++) {
        lens[word] = 0;
    }

    word = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            word++;
            continue;
        }

        lens[word]++;
    }

    for (i = 0; i < word; i++) {
        for (; lens[i] > 0; lens[i]--) {
            printf("#");
        }
        printf("\n");
    }
}