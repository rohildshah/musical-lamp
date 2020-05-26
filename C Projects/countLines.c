#include <stdio.h>
// 5-25-20


int main() {
    char input = getchar();
    if (input == '1') {     //count \n (newline) from stdin
        int cl = 0;
        int nl = 0;

        while ((cl = getchar()) != '$') {
            if (cl == '\n') {
                nl++;
            }
        }

        printf("%d\n", nl);

    } else if (input == '2') {        //count whitespace, \t (tab), \n (newline) from stdin
        int count = 0;
        int nchar;
        
        while ((nchar = getchar()) != '$') {
            if (nchar == '\n' || nchar == ' ' || nchar == '\t') {
                count++;
            }
        }

        printf("%d\n", count);
    } else if (input == '3') {         //replace all consecutive whitespace with singular whitespace from stdin
        int pchar = 0;
        int nchar;

        while ((nchar = getchar()) != '$') {
            if (pchar != ' ' || nchar != ' ') {
                pchar = nchar;
                putchar(nchar);
            }
            
        }
    } else if (input == '4') {         //replace all tabs and backspaces with arrow front or back from stdin
        int nchar;

        while ((nchar = getchar()) != '$') {
            if (nchar == '\t') {
                printf(">");
            } else if (nchar == '\b') {
                printf("<");
            } else {
                putchar(nchar);
            }
            
        }
    }

    return 0;
}