#include <stdio.h>
#include <assert.h>

int string_len(char s[]){
    int i = 0;    
    while(s[i] != 0) i++;
    return i;
}

void squeeze(char s1[], char s2[]) {
    int x;
    for (int j = 0; s2[j] != 0; j++) {
        int c = s2[j];
        x = 0;
        for(int i = 0; s1[i] != 0; i++){
            if (s1[i] != c){
                s1[x] = s1[i];
                x++;
            }        
        }
        s1[x] = 0;
    }
}

int main() {       //0123456
    char first[] =  "foobar";
    char second[] = "asdfg";
    
    assert(6 == string_len(first));
    assert(5 == string_len(second));
    printf("%s -> ", first);
    squeeze(first, second);
    printf("%s\n", first);

    return 0;
}