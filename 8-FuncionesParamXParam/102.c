#include <stdio.h>
#include <ctype.h>
#include <string.h>

void verif(char *str, int *v, int *c);

int main() {
    char s[10000];
    printf("Ingrese la cadena:\n");
    scanf("%s", s);

    int voc = 0, cons = 0;
    verif(s, &voc, &cons);
    printf("La cadena esta compuesta de %d vocales, y %d consonantes.\n", voc, cons);
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
