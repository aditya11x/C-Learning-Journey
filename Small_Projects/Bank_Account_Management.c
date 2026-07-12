#include <stdio.h>
int main () {
    int Balance, Accountnumber, Oldbalance, Deposit, Withdraw, Type;

    printf("Enter Your Account Number :    " );
    scanf("%d", &Accountnumber);

    printf("Enter Your Current Balance :   ");
    scanf("%d", &Oldbalance);

    
    printf("Please Select Transaction Type :\n");
    printf("               \n");
    printf("Enter 1 If You Want To Deposit\n");
    printf("Enter 2 If You want To Withdraw\n");
    scanf("%d", &Type);

    if(Type == 1){
        printf("Enter Deposit Amount : ");
        scanf("%d", &Deposit);

        Balance = Oldbalance + Deposit;
    }
    else if(Type == 2){
        printf("Enter Withdrawl Ammount : ");
        scanf("%d", &Withdraw);
        
        if(Withdraw <= Oldbalance){
        Balance = Oldbalance - Withdraw;
        }
        else {
            printf("Insufficient Balance\n");
        return 0;
        }

    }
    printf(" \n");
    printf("----------------------------------------------------\n");
    printf(" \n");
    
    printf("Account no. %d\n", Accountnumber);
    printf("Previous Balance is %d\n", Oldbalance);

    if(Oldbalance < Balance){
        printf("You Deposited %d \n", Deposit);
    }
    else if ( Oldbalance == Balance){
        printf("No Transaction Occured\n");
    }
    else if(Oldbalance > Balance){
        printf("You Withdrew %d \n", Withdraw);
    }
    printf("Your current Balance is %d \n", Balance);
    return 0;


    
}