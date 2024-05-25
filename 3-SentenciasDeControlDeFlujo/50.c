#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Prime numbers: ");
    for(int i = 1; i <= 100; i++){
        int flag = 0;
        for(int j = i; j >= 1; j--){
            if(i % j == 0){
                flag++;   
            }
        }
        if(flag <= 2){
            printf("%d ", i);
        }
    }
     
    
    
    return 0;
}