#include <stdio.h>
int main () {
    int number = 2, N;
    int factor = 0, a , b;
    printf("Enter the value of N : ");
    scanf("%d", &N);
    for(number = 2; number <= N; number++){
     for(a = 1; a<=number; a++){
        b = number%a;
        if(b==0){
            factor++;
        }
        
     }
     if(factor==2){
            printf("%d\n", number);
            
        }
        factor = 0;
            b = 0;
    }
    return 0;
}