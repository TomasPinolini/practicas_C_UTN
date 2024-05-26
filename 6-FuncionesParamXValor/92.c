#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    float ns[10];
    for(int i = 0; i < 10; i++){
        float n;
        printf(">> ");
        scanf("%f", &n);
        ns[i] = n;
    }
    printf("\nLos numeros ingresados son: ");
    for(int i = 0; i < 10; i++){
        printf("%.2f ", ns[i]);
    }
    printf("\n");
    printf("\nEl mayor de ellos es: ");
    float ban;
    for(int i = 0; i < 10; i++){
        if (i == 0){
            ban = ns[i];
        }
        if(ns[i]>ban){
            ban = ns[i];
        }
    }
    printf("%.2f.\n", ban);
    float sum;
    for(int i = 0; i < 10; i++){
        sum = sum + ns[i];
    }
    float prom = sum / 10;
    printf("\nEl promedio es: %.2f.\n", prom);

}

