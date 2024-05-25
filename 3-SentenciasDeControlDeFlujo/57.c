#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char n;
    printf("Ingrese un valor del teclado: ");

    scanf(" %c", &n);

    int ascii = (int)n;

    printf("\nEl valor ingresado %c, es %d en Ascii.\n", n, ascii);

      


    return 0;
}
