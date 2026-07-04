#include <stdio.h>
int main() {
    int c;
    int in_word = 0;
    while ((c = getchar()) != EOF) {
        int is_space = c == ' ' || c == '\t' || c == '\n';

        // is_space | in_word
        // 0           0 -> enter word, print_char
        // 0           1 -> print c
        // 1           0 -> skip
        // 1           1 -> leave word, print newline
        if(is_space) {
            if (in_word){
                in_word = 0;
                putchar('\n');
            }
        } else {
            in_word = 1;
            putchar(c);
        }

    }
    return 0;
}