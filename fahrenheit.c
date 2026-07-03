#include <stdio.h>

#define LOW 0
#define HIGH 300
#define STEP 20
int main() {
    
    printf("fahr\tcelc\n");

    // init*, condition, loop, increment, repeat

    for (int fahr = LOW; fahr <= HIGH; fahr += STEP) {
    // for (int fahr = HIGH; fahr >= LOW; fahr -= STEP) {
        float celc = (5.0/9.0) * (fahr-32);
        printf("%4d %6.1f\n", fahr, celc);
    }

    return 0;
}