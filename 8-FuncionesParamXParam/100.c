#include <stdio.h>
#include <ctype.h>
#include <string.h>

void verif(char *, int *, int *);

int main() {
    char s[10000];
    int voc = 0, cons = 0, cont = 0;
    carga(s, &cant);
    printf("El texto '%s' es de longitud %d.\n", s, cant);
    verif(s, &voc, &cons);
    int total = voc + cons;
    printf("La cadena de %d caracteres, esta compuesta de %d vocales, y %d consonantes.\n", cont, voc, cons);
    printf("El porcentaje de vocales es: %d%%.\n", (voc*100)/total);
    printf("El porcentaje de consonantes es: %d%%.\n", (cons*100)/total);

    return 0;
}

void verif(char *str, int *v, int *c) {
    *v= 0;
    *c= 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            char lower = tolower(str[i]);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                (*v)++;
            } else {
                (*c)++;
            }
        }
    }
}
