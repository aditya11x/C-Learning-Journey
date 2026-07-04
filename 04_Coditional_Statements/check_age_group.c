#include <stdio.h>
int main () {
    int  a;
    printf("Enter Your age:");
    scanf("%d", &a);
    if(a > 12 && a < 20 )
    {
        printf("You are teenager ");
    }
    else if(a>60)
    {
        if (a>99)
        {
        printf("You are legend");
        }
        else{
            printf("You are senior citizen");
        }

    }
    else if(a<13)
    {
        printf("You are kid");
    }
    else if(a>19 && a < 60)
    {
        printf("You are adult");
    }
   
return 0;
}