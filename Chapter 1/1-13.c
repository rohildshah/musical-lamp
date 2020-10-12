#include <stdio.h>
#include <ctype.h>

/* This is the function syntax that
 * shows up in the book, but I
 * prefer the syntax commented out below
 */
char lower(c)
char c;
{
    return tolower(c);
}

// char lower(char c) {
//     return tolower(c);
// }

int main() {
    char c;

    while ((c = getchar()) != EOF) {
        printf("%c", lower(c));
    }
}