#include <stdio.h>

int main() {
    //backspace
    printf("1hello, world\b");
    printf("\n");
    
    //delete (backspace in the opposite direction)
    printf("2hello, world\e123");
    printf("\n");

    //newline, then whitespace until end of previous line
    printf("3hello, world\f123");
    printf("\n");

    //newline
    printf("4hello, world\n");
    
    //carriage return
    printf("5hello, world\r");
    printf("6hello, world");
    printf("\n");

    //tab
    printf("7hello, world\t");
    printf("i'm tabbed!\n");
}