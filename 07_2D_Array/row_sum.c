#include <stdio.h>

int main() {
    int i, j;
    int row_sum = 0;
    int Number[3][3];

    printf("Enter 9 Numbers : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
           scanf("%d", &Number[i][j]); 
        }
    }

    for(i = 0; i < 3; i++){
        row_sum = 0;
        for(j = 0; j < 3; j++){
           row_sum+= Number[i][j]; 
        }
        
        printf("The sum of row %d is %d \n", i + 1, row_sum);
    }
    return 0;
}