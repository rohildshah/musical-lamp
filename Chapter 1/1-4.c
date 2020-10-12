#include <stdio.h>

/* print Fahrenheit-Celsius table
    for f = 0, 20, ..., 300 */

int main() {
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("degC  degF\n");
    
    celsius = lower;
    while (celsius <= upper) {
        fahr = ((9.0 * celsius) / 5.0) + 32.0;
        printf("%4.0f %5.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}