#include <stdio.h>
// 5-25-20


int main() {
    char i = getchar();
    char c;

    if (i == '1') {              //use while loop to print chars from stdin
        while ((c = getchar()) != '$') {
            putchar(c);
        }
    } else if (i == '2') {       //use while loop to count chars from stdin
        long nc = 0;
        while ((c = getchar()) != '$') {
            nc++;
        }
        printf("%ld\n", nc);
    } else if (i == '3') {      //use for loop to easily count chars from stdin
        double nc = 0;
        for (nc = 0; getchar() != '$'; nc++);
        printf("%.0f\n", nc);
    }
    

    return 0;
}