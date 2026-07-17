#include <stdio.h>

int main() {
    int i, j;
    int Number[3][3];
    
    printf("Enter 9 Numbers : ");
    for( i = 0; i < 3; i++){
        for( j = 0; j < 3; j++){
            scanf("%d", &Number[i][j]);
        }
    }
    printf("  \n");
    printf("---------\n");

        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                printf("%d  ", Number[i][j]);
            }
            printf("\n");

        }
    
    return 0;
}