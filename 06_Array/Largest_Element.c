#include <stdio.h>
int main () {
    int i, Largest_no = 0 ;
    int Number[10];

    printf("Enter 10 Numbers : ");
    for(i = 0; i < 10; i++){
        scanf("%d", &Number[i]);
    }
    
    for(i = 0; i < 10; i++){
        if(Number[i] > Largest_no){
            Largest_no = Number[i];
        }
        else if(Number[i] < Largest_no){
            Largest_no = Largest_no;
        }
    }
    printf("The largest number is %d", Largest_no);
}