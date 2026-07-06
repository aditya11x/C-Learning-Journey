#include <stdio.h>
int main () {
    int N, a = 1;
    printf("Enter the value of N : ");
    scanf("%d", &N);
    for(a=1; a<=N; a++){
        if((a%3 == 0) && (a%5 == 0)){
            printf("%d \n", a);
        }
    }
    return 0;
}