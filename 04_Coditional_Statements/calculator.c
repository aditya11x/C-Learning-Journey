//Calculator based on Case conditionals

#include <stdio.h>
int main (){
    int a,   b;
    char operator;
    printf("Enter Your First Number : ");
    scanf(" %d" , &a);
    printf("enter you second number : ");
    scanf("%d" , &b);
    printf("Enter Your operator : ");
    scanf(" %c", &operator);
    switch(operator){
        case '+' :
        printf(" %d", a + b);
        break;
        case '-' :
        printf(" %d" , a - b);
       break;
        case '/' :
        if (b != 0){
        printf(" %d", a / b);}
        else if ( b == 0){
            printf("Not defined");
        }
        break;
        case '*':
        printf(" %d", a*b);
        break ;
        default : printf("Your value doesn't match");

    



    }
    return 0;
}