// This Programs Tell If You Met Required Age To Drive

#include <stdio.h>
int main (){
    int a;
    printf(" Enter your age :");
    scanf("%d", &a);
    
    if( a > 17)
    {
        printf(" You can drive");
    }
    else {
        printf("You cannot drive");
    }
    return 0;
    
}