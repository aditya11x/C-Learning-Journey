#include <stdio.h>

int main() {
    int i, j;
    int largest_number = 0;
    int Number[3][3];
    
    printf("Enter 9 Numbers : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &Number[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(Number[i][j] > largest_number){
                largest_number = Number[i][j];
            }
        }
    }
    printf("  \n");
    printf("The largest Number is %d", largest_number);

    

    return 0;
}