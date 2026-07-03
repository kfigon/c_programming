#include <stdio.h>

int main() {
    const int low = 0;
    const int high = 300;
    const int step = 20;
    
    printf("fahr\tcelc\n");

    // init*, condition, loop, increment, repeat
    for (int fahr = low; fahr <= high; fahr += step) {
        float celc = (5.0/9.0) * (fahr-32);
        printf("%4d %6.1f\n", fahr, celc);
    }

    return 0;
}