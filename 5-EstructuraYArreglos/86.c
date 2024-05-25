#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 3

struct alumno {
    char leg[8];
    char nom[11];
    float prom;
};

char *m_leg;
float m_prom = 0;

int main() {
    struct alumno al[MAX];

    for(int i = 0; i < MAX; i++){
        printf("Ingresar valores del alumno %d:\n", i+1);
        char leg[7];
        char nom[10];

        fflush(stdin);
        printf("Legajo: ");
        fgets(leg, sizeof(leg), stdin);
        leg[strcspn(leg, "\n")] = '\0';
        fflush(stdin);
        printf("Nombre: ");
        gets(nom);
        fflush(stdin);
        strcpy(al[i].leg, leg);
        strcpy(al[i].nom, nom);        
        
        printf("Promedio: ");
        scanf("%f", &al[i].prom);
        fflush(stdin);

    };

    int apr = 0, dic = 0, mar = 0;

    printf("\n\nAlumnos: \n");
    for(int i = 0; i < MAX; i++){
        printf("Alumno %d:\n", i+1);
        printf("Legajo: %s\n", al[i].leg);
        printf("Nombre: %s\n", al[i].nom);
        printf("Promedio: %.2f\n", al[i].prom);
        printf("\n");

        if(al[i].prom < 4){
            printf("marzo");
            mar += 1;
        }else if(4 <= al[i].prom <= 7){
            dic += 1;
        }else if(al[i].prom > 7){
            apr += 1;
        }
        if(al[i].prom > m_prom){
            m_prom = al[i].prom;
            m_leg = al[i].leg;
        }
    };

    printf("\nHay %d rindiendo en marzo, %d en diciembre, y %d aprobaods\n", mar, dic, apr);
    printf("Legajo con mejor promedio: %s, con %.2f de promedio.\n", m_leg, m_prom);



    return 0;
}
