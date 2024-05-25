#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct alumno{
    char nombre[20];
    char turno; 
};

int main() {
    struct alumno alumno1 = {"Matias", 't'};
    fflush(stdin);
    struct alumno alumno2 = {"Sofia", 't'};
    fflush(stdin);

    if(alumno1.turno == alumno2.turno){
        printf("%s y %s, van al mismo turno '%c'.", 
        alumno1.nombre, alumno2.nombre, alumno1.turno);
    }else{
        printf("%s va al turno %c. Y el alumno %s va al turno %c.", 
        alumno1.nombre, alumno1.turno, alumno2.nombre, alumno2.turno);
    }

    return 0;
}
