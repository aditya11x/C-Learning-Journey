// The sum of number N
#include <stdio.h>
int main (){
    int sum= 0;
    int a = 1, n ;
    printf("Enter your number : ");
    scanf("%d", &n );
    while(a <= n ){
        sum = sum + a;
        a++;
    }
    printf("The sum is %d", sum);
    return 0;
}

