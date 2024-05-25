#include<stdio.h>
main(){
    int ent, ent2, ent3, ent4;
    scanf("%d", &ent);
    ent2 = ent * ent;
    ent3 = ent2 * ent;
    ent3 = ent2 * ent;
    printf("%d\n%d\n%d", ent, ent2, ent3);
    scanf("%d", &ent4);
    printf("\033[2]");
    printf("\033[H");
    prinf("%d", ent4);

}
