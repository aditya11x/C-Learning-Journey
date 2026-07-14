#include <stdio.h>
int main () {
    int i, x;
    int Numbers[10];
    printf("Enter 10 Random  Numbers : ");
    for(i = 0; i < 10; i++){
        scanf("%d", &Numbers[i]);
    }
    printf("---------");
    for(i = 0; i < 10; i++){
        x = Numbers[i] %2;
        if(x == 0){
            printf("%d\n", Numbers[i]);
        }
    }
    return 0;
}