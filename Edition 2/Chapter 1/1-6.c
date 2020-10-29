#include <stdio.h>

int main() {
    int c;

    // using ctrl+d results in 0
    // any other char is 1
    c = (getchar() != EOF);
    printf("%d\n", c);
}