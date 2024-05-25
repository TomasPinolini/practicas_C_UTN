#include <stdio.h>
#include <stdlib.h>

int main(){
    int aux = 0;
    for(int i = 0; i <= 100; i++){

        if(i % 2 == 0){
        
            if(aux < 6){ 
                aux++;
            }else{
                printf("\n");
                aux = 1;
            }

            printf(" %d ", aux);
            
            if(i >= 10){
                printf(" %d ", i);
            }else{
                printf(" %d  ", i);
            }
        
        }

    }





    return 0;
}