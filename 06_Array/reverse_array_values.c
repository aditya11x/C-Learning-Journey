#include <stdio.h>

int main() {
    int i, j, Number[10];
    int temp;
    printf("Enter 10 numbers : ");
    for(i = 0; i < 10; i++){
        scanf("%d", &Number[i]);
    }

    for(i = 0, j = 9; i < j; i++, j--){
        temp = Number[i];
        Number[i] = Number[j];
        Number[j] = temp;
    }
    for(i = 0; i < 10; i++){
        printf("%d\n", Number[i]);
    }
    return 0;
}