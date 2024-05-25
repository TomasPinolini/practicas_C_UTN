#include <stdio.h>
#include <stdlib.h>

int main(){

    int a=0, e=0, i=0, o=0, u=0, cont=0;
    char ch;

    for(int v = 0; v < 20; v++){
        cont++;
        scanf(" %c", &ch);
        // printf("_\n");
        switch(ch){
            case 'a':
                a++;
                break;

            case 'e':
                e++;
                break;

            case 'i':
                i++;
                break;

            case 'o':
                o++;
                break;

            case 'u':
                u++;
                break;

        }

        printf("-\n");
    }
    printf("Numero de a: %d,\n Numero de e: %d,\n Numero de i: %d,\n Numero de o: %d,\n Numero de u: %d,\n Con un total de %d numeros ingresados.", a, e, i, o, u, cont);

    return 0;
}