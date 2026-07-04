#include <stdio.h>
int main () {
    int a, b, c;
    printf("enter Maths marks: ");
    scanf("%d", &a);
    printf("enter science marks: ");
    scanf("%d", &b);
    printf("enter IT marks: ");
    scanf("%d", &c);
    if ((a+b+c) >= (120)){
        if(
           a >= 33 && b >= 33 && c >= 33
        ){printf("You are pass");

        }
        else {printf("not passed");}
    }
    else {
        printf(" You are not passed");
    }
    return 0;
}