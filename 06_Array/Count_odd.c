#include <stdio.h>
int main () {
    int i, count = 0;
    int Number[10];
    printf("Enter 10 Numbers : ");
    for(i = 0; i < 10; i++){
        scanf("%d", &Number);
    }
    
    printf("     ");

    for(i = 0; i < 10; i++){
        if(Number[i] % 2 != 0){
            count++;
        }
    }
    printf("There are %d odd numbers", count);
    
    return 0;
}