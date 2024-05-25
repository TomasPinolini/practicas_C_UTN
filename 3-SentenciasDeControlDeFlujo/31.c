#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if (num>0)
        printf("%d es positivo", num);
    else
        printf("%d es negativo", num);

    return 0;
}
