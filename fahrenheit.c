#include <stdio.h>

int main() {
    const int low = 0;
    const int high = 300;
    const int step = 20;
    
    printf("fahr\tcelc\n");
    int fahr = low;
    while (fahr <= high) {
        int celc = 5* (fahr-32)/9;
        printf("%d\t%d\n", fahr, celc);
        fahr += step;
    }
    return 0;
}