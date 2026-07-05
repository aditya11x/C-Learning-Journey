#include <stdio.h>
int main () {
    int number;
    int x ;
    int y ;
    int b  = 1;
    int r, r2, c, d, a;
    printf("Enter your number : ");
    scanf("%d", &number);
    x = number;
    y = number;
    
    while(x > 10){
        a = x % 10;
        x = x/10;
        b = b*10;
    }
    c = y%10;
    y = y/10;
    r = c*b;
    b = b/10;

    while(y > 0){
        d = y%10;
        r2 = d*b;
        
        y = y/10;
        b = b/10;
        r = r + r2;

    }
    if(number == r){
        printf("This number is a Palindrome");
    }
    else if (number != r ){
        printf(" This number is not a Palindrome");
    }
    return 0;
}