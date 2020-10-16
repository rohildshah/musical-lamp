#include <stdio.h>

int main() {
    unsigned int x;
    int i;

    // While loop method
    // x = i = 1;
    // while (x != 0) {
    //     x <<= 1;
    //     i++;
    // }
    // printf("%d\n", i - 1);

    // For loop method (simpler)
    x = 1;
    for (i = 0; x != 0; x <<= 1, i++);
    
    printf("%d\n", i);

}