#include <stdio.h>
int main () {
int number  , x, b = 1;
int factor = 0;
printf("Enter your number : ") ;
scanf("%d", &number);
while(b<=number){
    x = number%b;
    if (x == 0){
        factor++;
    }
    b++ ;
}

if(factor == 2){
    printf("This is a prime number");

}
else {
    printf("This is not a prime number");
}

return 0;

}