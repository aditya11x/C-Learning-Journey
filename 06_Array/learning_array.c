#include <stdio.h>
int main () {
    int integer[5];
    int i = 0;
    printf("Enter Integrs : ");
    for(i = 0; i < 5; i++){
        scanf("%d", &integer[i]);
    }

    printf("-----\n");
    for(i = 0; i < 5; i++){
        printf("%d\n", integer[i]);
    }
    return 0;

}