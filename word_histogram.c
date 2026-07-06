#include <stdio.h>

#define LIMIT 30
int main() {
    int c;
    int word_lengths[LIMIT];
    for (int i=0; i < LIMIT; i++)
        word_lengths[i] = 0;

    int in_word = 0;
    int current_word_len = 0;
    int longest_word = 0;

    while ((c = getchar()) != EOF) {
       int is_space = (c == ' ' || c == '\n' || c == '\t');

    //    in word | is space
    //     0           0 -> count char, in word = true
    //     0           1 -> skip
    //     1           0 -> inc count 
    //     1           1 -> inword = false, count word, zero state
        if (in_word) {
            if (!is_space){
                current_word_len++;           
                continue;
            }

            if (current_word_len > 0 && current_word_len < LIMIT) {
                word_lengths[current_word_len]++;
                longest_word = (current_word_len > longest_word) ? current_word_len : longest_word;
            }

            current_word_len = 0;
            in_word = 0;
        } else {
            if (!is_space){
                in_word = 1;
                current_word_len++;
            }
        }
    }
    if(in_word){
        if (current_word_len > 0 && current_word_len < LIMIT) {
            word_lengths[current_word_len]++;
            longest_word = (current_word_len > longest_word) ? current_word_len : longest_word;
        }
    }
    
    printf("\nlen | cnt\n");
    for (int i = 1; i <= longest_word; i++){
        printf("%3d |", i);
        for (int j = 0; j < word_lengths[i]; j++) printf("*");
        printf("\n");
    }
    
    return 0;
}