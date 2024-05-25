#include <stdio.h>

int main(){

    int j = 1;
    
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        printf("%d\n", j);
        j++;
    }
    return 0;
}