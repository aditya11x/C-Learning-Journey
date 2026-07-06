// This program prints even numbers from 1 to N

#include <stdio.h>
int main () {
    int N, x = 2;
    printf("Enter The value of N :  ");
    scanf("%d", &N);
    for(x = 2; x <= N; x = x + 2){
        printf("%d\n", x);
    }
    return 0;
}