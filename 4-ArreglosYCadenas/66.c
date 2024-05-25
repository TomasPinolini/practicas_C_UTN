#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int nums[10];
    for(int i = 0; i < 10; i++){
        scanf(" %d", &nums[i]);
    }
    
    int mayor = 0, sum = 0;
    
    printf("Los numeros ingresados son: ");
    
    for(int i = 0; i < 10; i++){
        if(i != 9){printf("%d, ", nums[i]);}
        else{printf("%d.", nums[i]);}
        printf("\n");
        
        if(mayor == 0){mayor = nums[i];}
        else{if(nums[i] > mayor){mayor = nums[i];}}

        sum = sum + nums[i];
    }
    
    float prom = sum / 10;
    printf("El mayor de ellos es: %d.\n", mayor);
    printf("Su promedio es: %0.2f.\n", prom);
    
    return 0;
}
