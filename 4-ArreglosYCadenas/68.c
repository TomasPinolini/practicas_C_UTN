#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char aaa[10];
    gets(aaa);
    int v = 0, nv = 0;
    printf("Analisis: \n");
    for(int i = 0; i < 10; i++){
        if(!isspace(aaa[i])){
            nv = nv + 1;
        }else{
            v = v + 1;
        }
    }    
    printf("La cantidad de digitos que aparecen en '%s' es %d, y en blanco %d.", aaa, v, nv);
    
    return 0;
}
