// This program counts number of digits in the given number.
#include <stdio.h>
int main (){
    int number;
    int a = 0;
    printf("Enter your number : ");
    scanf("%d", &number);
    while(number > 0){
       (number = number/10);
       
        a++ ; 

    }
    printf("This is a %d digit number", a);
    return 0;
}