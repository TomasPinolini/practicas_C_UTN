#include <stdio.h>
#include <stdlib.h>

int main(){

    char n;
    n = getchar();
    while(n >= 1){
        printf("%c", n);
        n = getchar();
    }


    return 0;
}