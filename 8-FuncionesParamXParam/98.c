#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char u, v = 'A';
    char *pu, *pv = &v;

    *pv = v + 1;
    u = *pv + 1;
    pu = &u;
    printf("%c ", u);
    printf("%c ", v);
    printf("%c ", *pu);
    printf("%c ", *pv);
}

