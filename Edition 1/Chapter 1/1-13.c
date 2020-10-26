#include <stdio.h>
#include <ctype.h>

// Old, not preferred function syntax
char lower(c)
char c;
{
    return tolower(c);
}

// Alternate, preferred function syntax
// char lower(char c) {
//     return tolower(c);
// }

// Writing my own function (does not use ctype.h)
// int lower(int c) {
//     if (c >= 'A' && c <= 'Z') {
//         return(c + 32);
//     }
//     return(c);
// }

int main() {
    char c;

    while ((c = getchar()) != EOF) {
        printf("%c", lower(c));
    }
}