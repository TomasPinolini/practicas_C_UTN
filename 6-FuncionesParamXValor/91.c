#include <stdio.h>
#include <ctype.h>
#include <string.h>

const float pi = 3.14159;

float area(float a){
    return a*a*pi;
}
float circuns(float a){
    return a*a*pi*2;
}
float diametro(float a){
    return 2*a;
}
int main() {
    float r;
    printf("Ingrese el valor del radio.\n");
    scanf("%f", &r);
    int opc = 9;
    while (opc != 0){
        printf("\n1- Area\n2-Circunsferencia\n3-Diametro\n0-Salir\n");
        printf("\nSeleccione:\n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
            printf("El area: %f.", area(r));
            break;
            case 2:
            printf("La circunsferencia: %f.", circuns(r));
            break;
            case 3:
            printf("El diametro: %f.", diametro(r));
            break;
        }
    }
}

