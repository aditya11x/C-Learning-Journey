#include <stdio.h>

int main() {
    int i, number[10];
    for(i = 0; i < 10; i++){
        scanf("%d", &number[i]);
    }

    printf(" \n");

    for(i = 10; i >= 0; i-- ){
        printf("%d\n", number[i]);
    }
    return 0;
}