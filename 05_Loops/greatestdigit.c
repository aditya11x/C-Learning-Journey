#include <stdio.h>
int main () {
    int number;
    int a, b;
    printf("Enter your number : ");
    scanf("%d", &number);
    
        a = number%10;
        number= number/10;
    while(number > 0){
        b = number%10;
        number = number/10;


        if(a>b){
            a=a;
        }
        else if(a<b) {
            a=b;
        }



    
    }
    printf("The greatest digit in the number is %d",  a);
}