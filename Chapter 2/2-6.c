#include <stdio.h>

int main() {
    unsigned int x;
    int i;

    x = i = 1;
    while (x != 0) {
        x <<= 1;
        i++;
    }

    printf("%d\n", i - 1);
}