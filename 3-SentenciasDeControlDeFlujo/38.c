#include <stdio.h>

int main(){
    
    int peso = 2, costo = 50;

    while(peso <= 20){
        printf("Peso: %d, Costo: %d\n", peso, costo);
        costo += 15;
        peso += 6;
    }

    return 0;
}

