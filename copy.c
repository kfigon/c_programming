#include <stdio.h>

int main() {
    int c;
    while((c = getchar()) != EOF) 
        putchar(c);        
    // putchar(c); // print val of EOF
    return 0;
}