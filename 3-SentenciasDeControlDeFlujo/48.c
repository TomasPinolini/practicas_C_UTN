#include <stdio.h>
#include <stdlib.h>

int main(){
    int aux = 0;
    printf("Multiplos de 2:\n");
    printf("--> ");
    for(int i = 0; i <= 100; i++){
        if(i % 2 == 0 && i != 0){
            printf("%i ", i);
        }
    }
    printf("\nMultiplos de 3\n:");
    printf("--> ");
    for(int i = 0; i <= 100; i++){
        if(i % 3 == 0 && i != 0){
            printf("%i ", i);
        }
    }
    return 0;
}