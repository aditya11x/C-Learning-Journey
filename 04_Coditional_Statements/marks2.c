#include <stdio.h>
int main () {
    int a, b, c;
    printf("enter Maths marks: ");
    scanf("%d", &a);
    printf("enter science marks: ");
    scanf("%d", &b);
    printf("enter IT marks: ");
    scanf("%d", &c);
    if ((a+b+c >= 120 && a + b + c < 240) && (a >=33 && a < 80) && (b>=33 && b < 80) && (c>=33 && c <80)){
        printf( "You are passed");
    }
    else if ((a+b+c >= 240) && (a >=80) && (b>=80) && (c>=80)){
    printf("You scored good");
    }
    else{
        printf("You are not passed");
    }
    return 0;
}