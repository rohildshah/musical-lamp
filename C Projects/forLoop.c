#include <stdio.h>
// 5-25-20


#define LOWER 0
#define UPPER 300
#define STEP 50

int main() {
    for (int f = LOWER; f <= UPPER; f = f + STEP) {         //calculate fahrenheit based on celsius bounds and step
        printf("%4d %6.1f\n", f, (5.0/9.0)*(f-32.0));
    }
    

    return 0;
}