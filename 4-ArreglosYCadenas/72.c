#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int nums[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for(int i = 0; i < 20; i++){
        int sol = 0;
        printf(">> ");
        scanf("%d", &sol);
        nums[i] = sol;
    }
    
    printf("\n");
    printf("Array: \n");
    
    for(int i = 0; i < 20; i++){
        if(i != 19){printf(" %d,", nums[i]);}
        else{printf(" %d.\n", nums[i]);}
    }
    printf("\n");
    printf("Ordenado: \n");

    for(int i = 0; i < 20; i++){
        for(int j = i+1; j < 20; j++){ 
            int aux = 0;
            if(nums[i] < nums[j]){
                aux = nums[i];
                nums[i] = nums[j];
                nums[j] = aux;
            }
        }
    }
    
    for(int i = 0; i < 20; i++){
        if(i != 19){printf(" %d,", nums[i]);}
        else{printf(" %d.\n", nums[i]);}
    }

    return 0;
}
