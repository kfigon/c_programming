#include <stdio.h>
int main() {
    long nc = 0;
    long line_counter = 0;
    long spaces = 0;
    long tabs = 0;
    int c;
    
    while((c = getchar()) != EOF) {
        nc++;
        if (c == '\n') line_counter++;
        if (c == '\t') tabs++;
        if (c == ' ') spaces++;
    }

    printf("char counter: %ld\n", nc);
    printf("line counter: %ld\n", line_counter);
    printf("space counter: %ld\n", spaces);
    printf("tab counter: %ld\n", tabs);
    return 0;
}