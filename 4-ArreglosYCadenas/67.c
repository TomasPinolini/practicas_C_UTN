#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char chars[26];
    int cont = 0;
    for(char i = 'a'; i <= 'z'; i++){
        chars[cont] = i;
        cont += 1;
    }
    for(int i = 0; i < 26; i++){
        printf("%c ", chars[i]);
    }
    
    return 0;
}
