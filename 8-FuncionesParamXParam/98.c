#include <stdio.h>
#include <ctype.h>
#include <string.h>

int verD(char a, int *b){
    char len = &a; 
    int b = strlen(len);
    return b;
}

int main() {
    char c; 
    gets(&c);
    int b;
    b = verD(&c, &b);
    printf("%s", &b);
}

