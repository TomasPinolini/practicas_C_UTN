#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char cad1[100], cad2[100], conc[200] = {};

    fflush(stdin);
    printf("Ingreso de cad1: \n");
    gets(cad1);
    fflush(stdin);

    printf("Ingreso de cad2: \n");
    gets(cad2);
    fflush(stdin);

    int comp = strcmp(cad1, cad2);
    
    if(comp == 0){
        printf("\nLas cadenas son iguales. \n");
    }
    else if(comp > 0){
        printf("\nLa cadena 1 es la mayor: %s.\n", cad1);
    }
    else if(comp < 0){
        printf("\nLa cadena 2 es la mayor: %s.\n", cad2);
    }

    int len1, len2;

    len1 = strlen(cad1);
    len2 = strlen(cad2);

    if(len1 > len2){printf("\nLa cadena 1 es mas larga: %s.\n", cad1);}
    else if(len2 < len1){printf("\nLa cadena 2 es mas larga: %s.\n", cad2);}
    else{printf("\nLas cadenas 1 y 2 son del mismo largo.\n");}


    
    strcat(conc, cad1);
    strcat(conc, cad2);
    
    fflush(stdin);
    printf("\nCadenas concatenadas: \n");
    printf("%s.\n", conc);
    

    printf("La cadena 1 invertida: \n");
    printf("%s\n", strrev(cad1));

    printf("La cadena 2 invertida: \n");
    printf("%s\n", strrev(cad2));

    return 0;
}
