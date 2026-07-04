#include <stdio.h>
int main (){
    float a;
    printf("Enter your salary (in lakhs)");
    scanf("%f", &a);
    if(a >= 2.50 && a < 5.00){
        printf("Your tax is %f",(5.0/100*a ));
    }
    else if(a >= 5.00 && a < 10.00){
        printf("Your tax is %f",(20.0/100)*a );
    }
    else if(a >= 10.00){
        printf("Your tax is %f", (30.0/100*a ));}
        else{printf("You don't have to pay tax");}
        
    return 0;
}
    

