#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int A[10] = {0,0,0,0,0,0,0,0,0,0};
    int B[10] = {0,0,0,0,0,0,0,0,0,0};
    int C[10] = {0,0,0,0,0,0,0,0,0,0};
    printf("'A':\n");
    printf("Numeros: '0', '1', '2', '2', '3', '4', '5', '6', '7', '8', '9'\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &A[i]);
    }

    

    printf("'B':\n");
    printf("Numeros: '0', '1', '2', '2', '3', '4', '5', '6', '7', '8', '9'\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &B[i]);
    }

    for(int i = 0; i < 10; i++){
        if(A[i] > B[i]){C[i] = B[i];}
        else{C[i] = A[i];}
    }
    printf("\n");
    printf("A: ");
    for(int i = 0; i < 10; i++){
        if(i != 9){printf(" %d,", A[i]);}
        else{printf(" %d.\n", A[i]);}
    }
    printf("\n");
    printf("B: ");
    for(int i = 0; i < 10; i++){
        if(i != 9){printf(" %d,", B[i]);}
        else{printf(" %d.\n", B[i]);}
    }
    printf("\n");
    printf("C: ");
    for(int i = 0; i < 10; i++){
        if(i != 9){printf(" %d,", C[i]);}
        else{printf(" %d.\n", C[i]);}
    }


    return 0;
}
