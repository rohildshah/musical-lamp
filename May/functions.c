#include <stdio.h>
#include <ctype.h>
// 5-26-2020

int power (int x, int n) {      // function to raise int x to the power of int n

    int p = 1;
    for (int i = 1; i <= n; i++) {
        p = p * x;
    }

    return(p);
}


int lower(int c) {           // returns lowercase of c if c is alpha
    if (!isalpha(c)) {
        return c;
    }
    return tolower(c);
}


int main() {        //test power and lower func
    for (int i = 0; i < 10; i++) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }

    printf("%c\n", lower(getchar()));

    return 0;

}