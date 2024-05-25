#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int min = 0, max = 0;

    for(int i = 1; i <= 5; i++){
        int n;
        printf("\nIngrese el %d valor: ", i);
        scanf(" %d", &n);

        if(min == 0){
            min = n;
        }else if(min < n){
            min == n;
        }
        if(max < n){
            max = n;
        }
    }

    printf("\nMinimo: %d", min);
    printf("\nMaximo: %d", max);

    return 0;
}