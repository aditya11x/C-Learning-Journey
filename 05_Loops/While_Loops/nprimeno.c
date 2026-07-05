#include <stdio.h>
int main () {
    int b = 1, a = 2, factor = 0, n, x;
    printf("Enter The Value of n : ");
    scanf("%d", &n);
    while(a <= n){
        
        while(b <= a){
            x = a%b;
            if(x==0){
                factor++ ;
            }
            b++;
        }
        
        
        if (factor == 2){
            printf("%d \n", a);
        }
        b = 1;
        factor = 0;
        
        a++ ;

        }
        return 0;
    }

    
