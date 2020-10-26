#include <stdio.h>

#define MAXLEN 1000

double atof(char s[]) {
    double val, power, exp;
    int i, sign, expsign;
    double result;

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

    result = sign * val / power;

    if (s[i] == 'e') {
        i++;

        expsign = 1;
        if (s[i] == '+' || s[i] == '-') {
            expsign = (s[i++] == '+') ? 1 : 0;
        }

        for (exp = 0; s[i] >= '0' && s[i] <= '9'; i++) {
            exp = 10 * exp + s[i] - '0';
        }

        for (; exp > 0; exp--) {
            result = expsign ? result * 10 : result / 10;
        }
    }

    return (result);
}

int main() {
    int c, len;
    char s[MAXLEN];

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            s[len] = '\0';
            printf("%lf\n", atof(s));
            len = 0;
            continue;
        }
        s[len++] = c;
    }
}