#include <stdio.h>
int main () {
    int number;
    int largest = 0, digit;
    printf("Enter your Number");
    scanf("%d", &number);
    for(number; number > 0; number = number/10){
        digit = number % 10;
        
        if(digit > largest){
            largest = digit;
        }
    }
    printf("%d", largest);
    return 0;

}