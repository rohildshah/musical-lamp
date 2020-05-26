#include <stdio.h>
// 5-25-20


int main() {
    int lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%-4s %-7s\n------------\n", "Fahr", "Celsius");    //convert from fahrenheit to celsius
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f %7.1f\n", fahr, celsius);
        
        fahr += step;
    }

    celsius = lower;

    printf("%-7s %-4s\n------------\n", "Celsius", "Fahr");    //convert from celsius to fahrenheit
    while (celsius <= upper) {
        fahr = (9.0/5.0) * (celsius) + 32.0;
        printf("%-7.0f %4.1f\n", celsius, fahr);
        celsius += step;
    }
    
}