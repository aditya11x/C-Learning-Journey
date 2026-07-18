#include <stdio.h>

int main() {
    int i, j;
    int sum = 0;
    int Numbers[3][3];
    
    printf("Enter 9 Numbers : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &Numbers[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            sum+= Numbers[i][j];
        }
    }
    printf(" \n");
    printf("Sum of all elements is %d", sum);
    return 0;
}