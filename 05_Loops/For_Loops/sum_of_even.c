#include <stdio.h>
int main () {
    int sum = 0;
    int a, N;
    printf("Enter the value of N : ");
    scanf("%d", &N);
    for(a = 2; a<=N; a = a + 2){
        sum += a;
    }
    printf("%d", sum);
    return 0;

}