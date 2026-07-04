// This Program Tells If You Are Teenager Or Not


#include <stdio.h>
int main (){
    int a;
    printf(" Enter your age :");
    scanf("%d", &a);
    if(a>12 && a<19)
    {
        printf(" You are teenager");
    }
    else {
        printf("You are not teenager");
    }
    return 0;
}