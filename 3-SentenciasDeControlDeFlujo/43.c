#include <stdio.h>
#include <stdlib.h>

int main(){

    int lim = 10, may = 0, men = 0, n;

    for(int i = 0; i < lim; i++){
        printf("--->");
        scanf("%d", &n);

        if(n > 0){
            may++;
        }else if(n < 0){
            men++;
        }
    }

    printf("%d numeros mayores a 0, y %d menores que 0.", may, men);

    return 0;
}