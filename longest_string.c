#include <stdio.h>

#define LIMIT 100
typedef struct {
    char str[LIMIT] ;    
    int len;
} Str;

void zero_str(Str* out) {
    out->len = 0;
    // solves null termination btw
    for(int i = 0; i < LIMIT; i++) out->str[i] = 0;
}

void copy(Str source, Str *destination) {
    zero_str(destination);
    
    for(int i = 0; i < LIMIT; i++)
        destination->str[i] = source.str[i];
    destination->len = source.len;
}

void get_line(Str* out) {
    zero_str(out);
    for(int c = getchar(); c != EOF; c = getchar()){
        if (out->len >= LIMIT || c == '\n') break;

        out->str[out->len] = c;
        out->len++;    
    }
}

int main() {
    Str longest;
    Str current;
    zero_str(&longest);
    zero_str(&current);
    
    do {
        get_line(&current);
        if (current.len >= longest.len) copy(current, &longest);
    }while(current.len != 0);
    
    printf("\nlongest str: \"%s\"", longest.str);

    return 0;
}