#include <stdio.h>
int main () {
    int N;
    int i;
    for (N = 5; N > 0; N --){
        for(i = 1; i <= N; i++){
            printf("*");
        }
        printf("\n");

    }
}