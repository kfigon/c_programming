#include <stdio.h>

#define MAX_LINE 100

void copy(char src[], char dest[]);
int get_line(char out[]);

int main() {
    char line[MAX_LINE];
    char longest[MAX_LINE];
    int max = 0;
    int current_len = 0;

    for(int i = 0; i< MAX_LINE; i++){
        line[i] = 0;
        longest[i] = 0;
    }

    while((current_len = get_line(line)) > 0) {
        if (current_len > max){
            copy(line, longest);
            max = current_len;
        }
    }

    printf("longest: \"%s\"\n", longest);
    return 0;
}

void copy(char src[], char dest[]) {
    int i = 0;
    while(i < MAX_LINE-1 && src[i] != 0){
       dest[i] = src[i];
       i++;
    }
    dest[i] = 0;
}
int get_line(char out[]){
    int len = 0;
    int c;
    while ((c = getchar()) != EOF && c != '\n' && len < MAX_LINE - 1) {
        // subtle bug - if we exceed MAX_LINE, next read will get the rest of the stream
        out[len] = c;
        len++;
    }

    out[len] = 0;
    return len;
}

