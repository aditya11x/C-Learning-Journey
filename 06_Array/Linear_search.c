#include <stdio.h>

int main() {
    int i, x;
    int number[10];
    printf("Enter 10 Numbers : ");
    for(i = 0; i < 10; i++){
        scanf("%d", &number[i]);
    }
    printf("Enter The Number to Search : ");
    scanf("%d", &x);

    for(i = 0; i < 10; i++ ){
        if( number[i] == x){
           printf("Found");
           return 0;
        }
        
    }
    printf("Not Found  ");
    return 0;
}