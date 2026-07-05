#include <stdio.h>
int main () {
    int multiple = 1 ;
    int a = 1, n  ;
    printf("Enter The Digit :");
    scanf("%d", &n);
    while( a <= n ) {
        (multiple = n*multiple);
        n-- ;

    }
    printf("The value is %d", multiple);
    return 0;
}