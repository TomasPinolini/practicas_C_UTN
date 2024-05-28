#include <stdio.h>
#include <ctype.h>
#include <string.h>

void verif(char *str, int *v, int *c);
char * carga(int *);
char * cambia_texto(char *, int);

int main() {

    char s[10000], s2[10000];
    carga(&s);
    cambia_texto(&s2, strlen(s));
    printf("El texto %s, cambiado se lee: %s.\n\n\n", s, s2);
    return 0;
}


char * carga(int *str){
    printf("Ingrese la cadena:\n");
    scanf("%s", str);
}

char * cambia_texto(char * str2, int len){
     for(int i = 0; i < len; i++){
        str2[i] = '*';
    }
}
