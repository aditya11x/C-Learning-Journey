#include <stdio.h>
int main () {
    int a, b = 0;
    int Numbers[10];
    printf("Enter Numbers : ");
    for(a = 0; a < 10; a++ ){
        scanf("%d", &Numbers[a]);
    }
    printf("    \n");
    for(a = 0; a < 10; a++){
        if(Numbers[a] %2 == 0){
            b++;
        }
    }
    printf("There are %d even numbers", b);
    return 0;
}