#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0

int main() {
    int c, state, char_count, word_count, line_count;

    state = OUT_WORD;
    char_count = word_count = line_count = 0;

    while ((c = getchar()) != EOF){
        char_count++; 
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT_WORD;
            if (c == '\n') line_count++;
        } else if(state == OUT_WORD) {
            state = IN_WORD;
            word_count++;
        }
    }
    printf("wc: %d, lc: %d, cc: %d\n", word_count, line_count, char_count);
    return 0;
}