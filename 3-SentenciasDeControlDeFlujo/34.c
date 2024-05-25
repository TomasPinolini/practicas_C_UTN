#include <stdio.h>

int main(){
    int num1, num2, aux;

    num1 = 0;
    num2 = 0;

    printf("Ingrese el primer valor: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &num2);

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("Ahora, num1 = %d, y num2 = %d", num1, num2);

    return 0;
}
