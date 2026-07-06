#include <stdio.h>
int main () {
    int factor = 0;
    int number, a, x;
    printf("Enter The Number : ");
    scanf("%d",&number);
    for(a=1; a<= number; a++){
        x = number%a;
        if(x==0){
            factor++;
        }
    }
    if(factor==2){
        printf("%d is a prime number", number);
    }
    else{
        printf("This is not a prime number");
    }
    return 0;
}