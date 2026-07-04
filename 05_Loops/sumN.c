// This program finds the sum of first N numbers.

#include <stdio.h>
int main (){
   int sum = 0;
   int a = 1;
int n;
printf("Enter The Digit : ");
scanf("%d", &n);

  
while(n >= a){
  
  sum = sum + a;
  a++ ;
}
printf("The sum of first %d numbers is %d", n, sum);
    return 0;
}