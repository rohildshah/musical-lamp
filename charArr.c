#include <stdio.h>
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


int main() {
    int len;
    char line[MAXSIZE];
    char input;
    
    if ((input = getchar()) == '1') {                      //prints lines greater than 80 chars of length
        while ((len = bringline(line)) > 80) {
            printf("%s\n", line);
        }
    } else if ((input = getchar()) == '2') {

    }
    

    return 0;

}