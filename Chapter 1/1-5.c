#include <stdio.h>

int main() {    /* Fahrenheit-Celsius table */
    int fahr;

    // titles
    printf("degF   degC\n");

    // going up
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        printf("%4d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    //going down
    printf("-----------\n");
    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%4d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

}