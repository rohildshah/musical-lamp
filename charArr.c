#include <stdio.h>
#include <string.h>

// 5-26-2020

#define MAXSIZE 1000

int bringline(char line[]) {        //function to get line from stdin and return length
    int c;
    int length = 0;

    while ((c = getchar()) != '$' && c != '\n' && length < MAXSIZE) {
        line[length] = c;
        length++;
    }

    return length;
}


void reverse(char s[]) {
    size_t l = strlen(s);
    char result[l];
    for (int i = 0; i < l; i++) {
        result[i] = s[l - i - 1];
    }

    printf("%s", result);
}


int main() {
    int len;
    char line[MAXSIZE];
    char input = getchar();
    

    if (input == '1') {                      //prints lines greater than 80 chars of length
        bringline(line);
        while ((len = bringline(line)) > 80) {
            printf("%s\n", line);
        }
    } else if (input == '2') {             //prints input from stdin backwards
        bringline(line);
        while ((len = bringline(line)) > 0) {
            reverse(line);
        }
    }
    

    return 0;

}