#include <stdio.h>
int main (){
    int a;
    printf("Enter Your Age");
    scanf("%d", &a);
    a >= 18? printf("You can drive") : printf(" You cannot drive");
    return 0;
}
