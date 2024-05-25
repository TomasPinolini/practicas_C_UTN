#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Cuantos numeros quiere ingresar? ");    
    int n;
    scanf(" %d", &n);
    
    while(n <= 0){
        printf("Numero de iteraciones invalido.\n ");    
        printf("Cuantos numeros quiere ingresar? \n");    
        scanf(" %d", &n);
    }
    
    // printf("%d", n);

    int mayor = 0, menor = 0;

    for(int i = 1; i <= n; i++){
        printf("%d - ", i);
        
        int num;
        scanf(" %d", &num);
        
        if(num > mayor){
            mayor = num;
        }
        if(num < menor){   
            menor = num;
        }
        if(menor == 0){
            menor = num;
        }

    }

    float media = (mayor - menor) / 2;

    printf("%d, %d\n", menor, mayor);
    printf("%f, es la media de los numeros ingresados.", media);
    
    return 0;
}