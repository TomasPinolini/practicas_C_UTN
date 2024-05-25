#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, nmayor, nmenor;
    float media;

    scanf("%d", &n);
    
    while(n != -1){
        if(n > nmayor) nmayor = n;
        if(n < nmenor) nmenor = n;
        scanf("%d", &n);    
    }

    if(n != -1){
        printf("Saliendo...");
    }else{
        media = (nmayor + nmenor) / 2;
        printf("%d es el numero menor, %d es el numero mayor y %f es la media entre todos los valores ingresados.", nmenor, nmayor, media);
    }




    return 0;
}