#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct alumnos {
    char nombre[20];
    char n_legajo[6];
    char domicilio[15];
    char turno;
};

int main() {
    struct alumnos info[300];
    
    strcpy(info[0].nombre, "Juan Gomez");
    fflush(stdin);
    strcpy(info[0].n_legajo,"12345");
    fflush(stdin);
    strcpy(info[0].domicilio, "San Juan 1056");
    fflush(stdin);
    info[0].turno = 'm';
    fflush(stdin);
    
    printf("%s\n", info[0].nombre); 
    printf("%s\n", info[0].n_legajo); 
    printf("%s\n", info[0].domicilio); 
    printf("%c\n", info[0].turno); 
    


    return 0;
}
