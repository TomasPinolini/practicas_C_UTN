#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    
    printf("Ingrese un valor: ");

    scanf("%d", &n);

    while (n != 0){
        while(n < 0){
            printf("ERROR, el numero debe ser mayor que cero. \n");
            scanf("%d", &n);
        }
        int c = n * n;
        printf("El cuadrado de %d, es %d \n", n, c);
        printf("Ingrese otro valor: ");
        scanf("%d", &n);
    }


    return 0;
}