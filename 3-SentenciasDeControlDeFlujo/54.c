#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    printf("Ingrese un valor: ");
    scanf(" %d", &n);

    while(n > 10 | n < 0){
        printf("\nVálido de 0 a 10: ");
        scanf(" %d", &n);
    }

    for(int i = 1; i <= 10; i++){
        int p = i * n;
        printf("%d * %d = %d\n", n, i, p);
    }

    return 0;
}