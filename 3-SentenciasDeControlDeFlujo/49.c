#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    
    do{
        scanf("%d", &num);
        while(num <= 1){
            if(num != 0){
                printf("Numero invalido. Intente de nuevo: \n");
                scanf("%d", &num);
            }else break;
        }

        for(int i = 1; i <= num; i++){
            if(i % 2 == 0){
                printf("%d ", i);
            }
        }
        printf("\n");

    }while(num != 0);
     
    
    
    return 0;
}