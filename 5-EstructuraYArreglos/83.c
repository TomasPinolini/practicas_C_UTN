#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 5

struct alumnos {
    char nombre[20];
    int altura;
};

int main() {
    struct alumnos info[MAX];
    int cont = 0, c_al, n_masalto, a_masalto;

    char * nom;
    do{
        printf("\nAlumno %d, ingrese '*' en Apellido, para terminar.\n >> ", cont);
        gets(nom);
        
        fflush(stdin);
        
        if(strcmp(nom, "*") != 0){
            strcpy(info[cont].nombre, nom);
            printf("\nAltura (cm): ");
            scanf(" %d", info[cont].altura);
            cont = cont + 1;
        }
 
    }while(cont < 400 && strcmp(nom, "*") != 0);

    for(int i = cont; i < cont; i++){
        printf("%s, %d\n",info[i].nombre, info[i].altura);
    }

    return 0;
}
