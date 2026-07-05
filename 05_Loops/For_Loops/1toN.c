#include <stdio.h>
int main () {
    int a;
    int N;
    printf("Enter the value of N : ");
    scanf("%d", &N);
    for(a = 1; a <= N; a++ ){
        printf("%d \n", a);
    }
    return 0;
}
