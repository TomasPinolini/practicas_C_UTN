#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int nums[1000], num, sum = 0;
    for(int i = 0; i < 1000; i++){
        nums[i] = i;
    } 
    printf("\nIngrese el numero a evaluar: ");
    scanf(" %d", &num);

    printf("\nMenores: \n");
    for(int i = 0; i < 1000; i++){
        if(nums[i] < num){
            printf("%d, ", nums[i]);
            if(i % 10 == 0 && i != 0){
                printf("\n");
            }
        }
    }

    printf("\n\nNumero ingresado: %d\n",num);

    printf("\nMayores: \n");
    for(int i = 0; i < 1000; i++){
        if(nums[i] > num){
            printf("%d, ", nums[i]);
            if(i % 10 == 0 && i != 0){
                printf("\n");
            }
            sum += nums[i];
        }
    }    
    printf("\n\nSumatoria de los mayores: %d", sum);
    return 0;
}
