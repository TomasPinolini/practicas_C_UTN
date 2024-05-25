#include <stdio.h>
#include <stdlib.h>

int main(){
    int min, max, n;

    printf("Ingrese el minimo: ");
    scanf(" %d", &min);
    
    printf("\nIngrese el maximo: ");
    scanf(" %d", &max);

    printf("\nIngrese numero a evaluar: ");
    scanf(" %d", &n);

    if(min < n && n < max){
        printf("%d pertenece al intervalo.", n);
    }else{
        printf("%d no pertenece al intervalo.", n);
    }


    return 0;
}