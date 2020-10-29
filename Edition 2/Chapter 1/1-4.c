#include <stdio.h>


int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperatuire scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("degC   degF\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = ((9.0 * celsius) / 5.0) + 32.0;
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}
