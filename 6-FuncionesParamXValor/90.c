#include <stdio.h>
#include <ctype.h>
#include <string.h>



int main() {
    int n1, n2;
    printf("Primer valor: ");
    scanf("%d", &n1);
    printf("Segundo Valor: ");
    scanf("%d", &n2);
    printf("\n1- SUMAR\n2- RESTAR\n3- MULTIPLICAR\n4- DIVIDIR\n5-SALIR");
    int opc;
    while(opc != 5){
        printf("\nSelecciones: ");
        scanf("%d", &opc);
        int r;
        float f;
        switch(opc){
            case 1:
            r = n1 + n2;
            printf("%d + %d = %d", n1, n2, r);
            break;
            case 2:
            r = n1 - n2;
            printf("%d - %d = %d", n1, n2, r);        
            break;
            case 3:
            r = n1 * n2;
            printf("%d * %d = %d", n1, n2, r);
            break;
            case 4:
                if (n2 == 0) {
                    printf("Error: División por 0.\n");
                } else {
                    f = n1 / n2;  
                    printf("%d / %d = %.2f", n1, n2, f);
                }
                break;
            default:
            break;        
        }
    }

}

