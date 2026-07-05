// Program To Print Multiplication Table (1 to 10) Of The Entered Number.

#include <stdio.h>
int main () {
   int a = 1;
   int b ;
   printf("Enter Your Digit :  ");
   scanf("%d", &b);
   while(a <= 10){
    printf("%d \n", a*b);
    a++ ;
 
    }


    
    return 0;
}