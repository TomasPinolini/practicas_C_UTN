#include <stdio.h>
#include <stdlib.h>

int main(){

    char l[] = "lunes";
    char ma[] = "marter";
    char mi[] = "miercoles";
    char j[] = "jueves";
    char v[] = "viernes";
    char s[] = "sabado";
    char d[] = "domingo";

    printf("Ingresando un 0 se cierra el programa: ");
    
    int n;
    n = scanf(" %d", &n);

    while(n != 0){
        switch (n){
        case 1:
            printf("%s", l);
            break;
        case 2:
            printf("%s", ma);
            break;
        case 3:
            printf("%s", mi);
            break;
        case 4:
            printf("%s", j);
            break;
        case 5:
            printf("%s", v);
            break;
        case 6:
            printf("%s", s);
            break;
        case 7:
            printf("%s", d);
            break;
        

        default:
            break;
        }
        
        printf("\n");
        n = scanf(" %d", &n);
        printf("%d \n", n);
    }
    return 0;
}