#include <stdio.h>
int main () {
    int number, digit;
    int reverse = 0;
    printf("Enter Your Number : ");
    scanf("%d", &number);
    int x = number;
    while(number>0){
        digit = number%10;
        reverse = reverse*10 + digit;
        number = number/10;
    }
    if (reverse == x){
        printf("This is a Palindrome");
    }
    else{
        printf("This is not a palindrome");
    }
    return 0 ;
}