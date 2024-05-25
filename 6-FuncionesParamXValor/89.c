#include <stdio.h>
#include <ctype.h>
#include <string.h>

int cubo(int n){
    return n*n*n;
}

int main() {
    int i, r;
    for(int i = 0; i < 5; i++){
        r = cubo(i);
        printf("El cubo de %d: %d\n", i, r);
    }
    return 0;
}

