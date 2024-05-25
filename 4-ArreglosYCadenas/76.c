#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    char texto[100];
    printf("Ingreso: \n");
    gets(texto);
    fflush(stdin);
    
    int ltexto = strlen(texto);

    char pal[100];
    printf("Ingreso palabra a buscar: \n");
    gets(pal);
    fflush(stdin);
    int lpal = strlen(pal);

    // 
    // printf("%s", ret);

    char *ret = strstr(texto, pal); 

    int cont = 0;

    if(ret != '\0'){
        cont += 1;
        for(int i = 0; i < ltexto; i++){
            char *t = texto[i, ltexto];
            ret = strstr(t, pal);
            if(ret != '\0'){
                cont += 1;
            }

        }        
    }else{
        printf("No encontrado!");
    }
    
    

    // char *ret = strstr(texto, pal); 

    // printf("%s\n", ret);


    return 0;
}
