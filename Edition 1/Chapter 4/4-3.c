#include <stdio.h>
#include <math.h>

#define MAXOP 20                // max size of operand, operator
#define NUMBER '0'              // signal that number found
#define TOOBIG '9'              // signal that string is too big

#define MAXVAL 100              // maximum depth of val stack
int sp = 0;                     // stack pointer
double val[MAXVAL];             // value stack

#define BUFSIZE 100
char buf[BUFSIZE];              // buffer for ungetch
int bufp = 0;                   // next free position in buf

void _clear() {                 // clear stack
    sp = 0;
}

double push(double f) {         // push f onto value stack
    if (sp < MAXVAL) {
        return(val[sp++] = f);
    } else {
        printf("error: stack full\n");
        _clear();
        return(0);
    }
}

double pop() {                  // pop top value from stack
    if (sp > 0) {
        return(val[--sp]);
    } else {
        printf("error: stack empty\n");
        _clear();
        return(0);
    }
}

double atof(char s[]) {         // convert string s to double
    double val, power;
    int i, sign;

    for (i = 0; s[i] == ' ' || s[i] == '\n' || s[i] == '\t'; i++);
    
    sign = 1;
    if (s[i] == '+' || s[i] == '-') {
        sign = (s[i++] == '+') ? 1 : -1;
    }

    for (val = 0; s[i] >= '0' && s[i] <= '9'; i++) {
        val = 10 * val + s[i] - '0';
    }

    if (s[i] == '.') {
        i++;
    }

    for (power = 1; s[i] >= '0' && s[i] <= '9'; i++) {
        val = 10 * val + s[i] - '0';
        power *= 10;
    }

    return(sign * val / power);
}

int getch() {                   // get a (possibly pushed back) character
    return ((bufp > 0) ? buf[--bufp] : getchar());
}

void ungetch(int c) {           // push character back on input
    if (bufp > BUFSIZE) {
        printf("ungetch: too many characters\n");
    } else {
        buf[bufp++] = c;
    }
}

int getop(char s[], int lim) {  // get next operator or operand
    int i, c;
    while ((c = getch()) == ' ' || c == '\t' || c == '\n');

    if (c != '.' && c != '-' && (c < '0' || c > '9')) {
        return(c);
    }
    s[0] = c;
    for (i = 1; (c = getchar()) >= '0' && c <= '9'; i++) {
        if (i < lim) {
            s[i] = c;
        }
    }
    
    if (c == '.') {
        if (i < lim) {
            s[i] = c;
        }
        for (i++; (c = getchar()) >= '0' && c <= '9'; i++) {
            if (i < lim) {
                s[i] = c;
            }
        }
    }

    if (i < lim) {
        ungetch(c);
        s[i] = '\0';
        return(NUMBER);
    } else {
        while (c != '\n' && c != EOF) {
            c = getchar();
        }
        s[lim - 1] = '\0';
        return(TOOBIG);
    }
}

int main() {                    // reverse Polish desk calculator
    int type;
    char s[MAXOP];
    double op2;

    while ((type = getop(s, MAXOP)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0) {
                    push(pop() / op2);
                } else {
                    printf("zero divisor popped\n");
                }
                break;
            // begin my addition
            case '%':
                op2 = pop();
                if (op2 != 0.0) {
                    push(fmod(pop(), op2));
                } else {
                    printf("zero divisor popped\n");
                }
                break;
            // end my addition
            case '=':
                printf("\t%f\n", push(pop()));
                break;
            case 'c':
                _clear();
                break;
            case TOOBIG:
                printf("%.20s ... is too long\n", s);
                break;
            default:
                printf("unknown command %c\n", type);
                break;
        }
    }
}