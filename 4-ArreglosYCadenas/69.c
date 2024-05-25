#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int nums[10] = {0,0,0,0,0,0,0,0,0,0};
    printf("Numeros: '0', '1', '2', '2', '3', '4', '5', '6', '7', '8', '9'\n");
    printf("Ingrese '-1' para finalizar el ingreso.\n");
    int sol = 0;
    printf("Numero: ");
    scanf("%d", &sol);

    while(sol != -1){
        nums[sol] = nums[sol] + 1;
        printf("Numero: ");
        scanf("%d", &sol);
    }

    for(int i = 0; i < 10; i++){
        printf("Elemento %d cantidad total: %d.\n", i, nums[i]);
    }

    return 0;
}
