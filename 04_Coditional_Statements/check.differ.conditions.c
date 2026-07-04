// This Program Checks If The Student Got 40% Overall And Above 33% in every subject

#include <stdio.h> 
int main () {
    int a, b, c, d ;
    printf(" Enter Your Maths marks : ") ;
    scanf ("%d", &a);
    printf(" Enter your Science Marks : ");
    scanf("%d", &b);
    printf(" Enter SSC marks : ");
    scanf("%d", &c);
    printf(" Enter Your IT marks : ");
    scanf("%d", &d);
    if( (a + b + c + d) >= 40/100 * 400) {
        if(( a >= 33/100* 100) && (b >= 33/100* 100) && (c >= 33/100* 100) && (d >= 33/100* 100) )
            printf(" You are passed");
        }
        else{ printf("You are not passed"); }
    
        return 0;

    }






