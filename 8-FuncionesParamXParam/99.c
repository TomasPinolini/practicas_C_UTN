#include <stdio.h>
#include <ctype.h>
#include <string.h>
char * verif (char *);

int main() {
    char s[10000];
    printf("Ingrese la cadena:\n");
    scanf("%s", &s);
    int *poin = verif(s);
    printf("La cadena esta compuesta de %d caracteres alphanuméricos.\n", poin);

    return 0;
}

char * verif (char *str){
    int cont = 0;
    for(int i = 0; i < sizeof(str); i++){
        if(isalnum(str[i])){
            cont++;
        }
    }
    return cont;
};
