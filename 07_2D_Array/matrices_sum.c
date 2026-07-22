#include <stdio.h>

int main() {
    int i, j;
    int sum = 0;
    int Number1[3][3];
    int Number2[3][3];
    int Sum[3][3];
    
    printf("Enter 9 Numbers for First Matrix : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &Number1[i][j]);
        }
    }
    printf("Enter 9 Numbers for Second Matrix : \n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &Number2[i][j]);
        }
    }



    for(i = 0; i < 3; i ++){
        for(j = 0; j < 3; j++){
           Sum[i][j] = Number1[i][j] + Number2[i][j];
           
        }


    }
    printf(" Sum of Matrices : \n");
    for( i = 0; i < 3; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            printf("%4d", Sum[i][j]);
        }
    }

    return 0;
}