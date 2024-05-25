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

    struct alumnos alumno1 = {"Mateo", "00001", "Montevideo", 'm'};
    fflush(stdin);
    printf("Nombre: %s\n", alumno1.nombre);
    printf("Numero de legajo: %s\n", alumno1.n_legajo);
    printf("Domicilio: %s\n", alumno1.domicilio);
    printf("Turno: %c\n", alumno1.turno);



    return 0;
}
