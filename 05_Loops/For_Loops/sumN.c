#include <stdio.h>
int main () {
    int sum = 0, a;
    int N;
    printf("Enter the value of N : ");
    scanf("%d", &N);
    for(a = 1; a<=N; a++){
        sum += a;

    }
    printf("The sum of numbers 1 to %d is %d" , N, sum);
    return 0;
}