#include <stdio.h>
int main () {
    int i, sum = 0;
    int Number[10];

    for(i = 0; i < 10; i++){
        scanf("%d", &Number[i]);
    }

    printf("    \n");

    for(i = 0; i < 10; i++){
        sum+=Number[i];
    }
    printf("The sum of elements is %d", sum);
    return 0;
}