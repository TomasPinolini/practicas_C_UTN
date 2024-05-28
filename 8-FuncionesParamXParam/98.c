#include <stdio.h>
#include <ctype.h>
#include <string.h>
int verifD(char *, int *);

void main() {
    char c[100];
    printf("Ingresar la cadena: \n");
    scanf("%s", &c);
    int cantd = 0;
    int cantc = verifD(c, &cantd);
    printf("\nDígitos: %d\nCaracteres: %d", cantd, cantc);
}

int verifD(char * cad, int * cd){
    int i, cant;
    cant = strlen(cad);
    for(i = 0; i < cant; ++i){
            if(isdigit(cad[i]))(*cd)++;
   };
   return cant;
};
