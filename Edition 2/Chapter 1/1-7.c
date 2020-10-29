#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF);
    c = getchar();

    // prints -1 since EOF is -1
    // use ctrl+d to type EOF
    printf("%d\n", c);
}