#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int nums[2][3], mayorabs = 0;
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf(" %d", &nums[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(abs(nums[i][j]) > abs(mayorabs)){
                mayorabs = nums[i][j];
            }
        }
    }
    printf("%d es el numero.", mayorabs);

    return 0;
}
