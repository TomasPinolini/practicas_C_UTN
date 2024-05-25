#include <stdio.h>
#include <stdlib.h>

int main(){
    int pos = 0;
    int neg = 0;
    int n;
    int flag = 0;

    printf("Inserte su numeros (0 para salir): \n");
    for(int i = 0; i < 10; i++){
        scanf(" %d", &n);
        printf("-> ");
        if(n == 0){
            printf("Saliendo...");
            exit(EXIT_SUCCESS);
        }else if(n > 0){
            pos = pos + n;
        }else if(n < 0){
            if(flag == 0){
                flag = 1;
                neg = n;
            }else{
                neg = neg * n;
            }
        }
    }
    printf("%d para los positivos.\n", pos);
    printf("%d para los negativos.", neg);
    
    return 0;
}