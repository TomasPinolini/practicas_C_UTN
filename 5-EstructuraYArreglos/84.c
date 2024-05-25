#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 5

struct reg {
    char cod[6];
    char nombre[21];
    char dom[21];
    int saldo;
};

int main() {
    int i;
    struct reg regis[MAX];

    strcpy(regis[0].cod,"00000");
    strcpy(regis[0].nombre, "John Doe");
    strcpy(regis[0].dom, "123 Main St");
    regis[0].saldo = 1000;

    strcpy(regis[1].cod,"00001");
    strcpy(regis[1].nombre, "Alice Smith");
    strcpy(regis[1].dom, "456 Elm St");
    regis[1].saldo = 1500;

    strcpy(regis[2].cod,"00002");
    strcpy(regis[2].nombre, "Bob Johnson");
    strcpy(regis[2].dom, "789 Oak St");
    regis[2].saldo = 2000;

    strcpy(regis[3].cod,"00003");
    strcpy(regis[3].nombre, "Jane Brown");
    strcpy(regis[3].dom, "321 Pine St");
    regis[3].saldo = 2500;

    strcpy(regis[4].cod,"00004");
    strcpy(regis[4].nombre, "Sarah Lee");
    strcpy(regis[4].dom, "654 Maple St");
    regis[4].saldo = 3000;

    int enc = 0;
    char codigo[6]; 
    
    do{
        printf("\n");
        printf("Ingrese el codigo a buscar: ");
        fgets(codigo, sizeof(codigo), stdin);
        
        for(i = 0;i < MAX; i++){
            if(enc != 0){
                break;
            }else{
                if(strcmp(regis[i].cod,codigo) == 0){
                    printf("Encontrado!");
                    enc = 1;
                    printf("\n%s\n%s\n%d\n", regis[i].nombre, regis[i].dom, regis[i].saldo);
                    
                }
            }
        }
    }while (strcmp(codigo, "*\n") != 0);
    // if(enc == 0){
    //     printf("No encontrado");
    // }

    return 0;
}
