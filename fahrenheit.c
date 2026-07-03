#include <stdio.h>

int main() {
    const int low = 0;
    const int high = 300;
    const int step = 20;
    
    int fahr = low;
    while (fahr <= high) {
        int celc = 5* (fahr-32)/9;
        printf("%d fahr \t %d celc\n", fahr, celc);
        fahr += step;
    }
    return 0;
}