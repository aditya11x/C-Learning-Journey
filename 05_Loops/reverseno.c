#include <stdio.h>
int main () {
    int number, a;
    printf("Enter Your Number : ");
    scanf("%d", &number);
    while(number > 0){
        (a = number % 10);
        printf("%d", a);
        (number = number/10);
    }
    return 0;
}