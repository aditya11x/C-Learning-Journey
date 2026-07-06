// This Program Writes The Multiplication Table Of given Number upto 10

#include <stdio.h>
int main () {
    int N, a = 1;
    printf("Enter Your Number : ");
    scanf("%d", &N);
    for(a = 1; a <= 10; a++){
    printf("%d \n", N*a);
    }
    return 0;
    
}