#include <stdio.h>

int main() {
    int i, j;
    int coulumn_sum;
    int Number[3][3];

    for(i = 0; i < 3; i ++){
       for(j = 0; j < 3; j++){
        scanf("%d", &Number[i][j] );
       }
    }

    for(j = 0; j < 3; j++){
        for(i = 0; i < 3; i++){
            coulumn_sum += Number[i][j];
        }
        printf("Sum of row %d is %d \n", j + 1, coulumn_sum);
    }

    
    return 0;
}