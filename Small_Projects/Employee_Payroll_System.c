#include <stdio.h>
int main () {
    int Id, Salary, Rating;
    int HRA, DA, Bonus, Grosssalary ;
     
    int i = 1;

    for(i = 1; i <= 5; i++) {
    printf("Enter  Id :  ");
    scanf("%d", &Id);
    printf("Enter  Salary : ");
    scanf("%d", &Salary );
    printf(" Enter  Performance Rating : ");
    scanf("%d", &Rating);
     
    HRA = 0.2*Salary;
    DA = 0.1*Salary;

    switch(Rating) {
        case 1 :
        Bonus = 0;
        break;

        case 2 :
        Bonus = 500;
        break;

        case 3 :
        Bonus = 1500;
        break;

        case 4 :
        Bonus = 3000;
        break;

        case 5 : 
        Bonus = 5000;
        break;

    }

    printf("Gross salary is %d \n", Salary + HRA + DA + Bonus );
    printf("                                                     \n");

    HRA = 0;
    DA = 0;

    }


    return 0;


}