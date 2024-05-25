#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 5

struct reg {
    char ape[21];
    int nota;
    char leg[7];
};

int main() {
    struct reg al[8];

    strcpy(al[0].ape, "Lollo");
    al[0].nota = 9;
    strcpy(al[0].leg, "000001");

    strcpy(al[1].ape, "Carrillo");
    al[1].nota = 2;
    strcpy(al[1].leg, "000002");

    strcpy(al[2].ape, "Dominguez");
    al[2].nota = 3;
    strcpy(al[2].leg, "000003");

    strcpy(al[3].ape, "Rodriguez");
    al[3].nota = 5;
    strcpy(al[3].leg, "000004");

    strcpy(al[4].ape, "Mammana");
    al[4].nota = 6;
    strcpy(al[4].leg, "000005");

    strcpy(al[5].ape, "Fontana");
    al[5].nota = 4;
    strcpy(al[5].leg, "000006");

    strcpy(al[6].ape, "Zuqui");
    al[6].nota = 2;
    strcpy(al[6].leg, "000007");

    strcpy(al[7].ape, "Zetre");
    al[7].nota = 1;
    strcpy(al[7].leg, "000008");

    char c = 'S';
    char leg[6];

    while(c != 'N'){
        fflush(stdin);
        printf("Ingrese el legajo del alumno a modificar: ");
        scanf("%s", &leg);
        int not, ban = 0;

        for(int i = 0; i < 8; i++){
            if(strcmp(al[i].leg, leg) == 0){
                ban = 1;
                printf("Ingrese la nota a insertar: ");
                fflush(stdin);
                scanf("%d", &not);
                al[i].nota = not;
            }
        }
        if(ban == 0){
            printf("\nError: Alumno con legajo '%s' no encontrado...\n", leg);
        }

        fflush(stdin);
        printf("Desea continuar? (Solo frenara ingresando 'N'): ");
        c = getchar();
        printf("\n");

    }

    printf("\nDatos post-edicion:\n");
    
    for(int i = 0; i < 8; i++){
        printf("Usuario %d:\n", i+1);
        printf("Apellido: %s\n", al[i].ape);
        printf("Nota: %d\n", al[i].nota);
        printf("Legajo: %s\n", al[i].leg);
        printf("\n");
    }

    return 0;
}
