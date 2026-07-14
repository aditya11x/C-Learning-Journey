#include <stdio.h>

int main() {
    int i, smallest_no;
    int Number[10];
    printf("Enter 10 Numbers : ");
    for(i = 0; i < 10; i++){
        scanf("%d", &Number[i]);
    }

    for(i = 0; i < 10; i++){
        if(Number[i] < smallest_no){
            smallest_no = Number[i];
        }
        else if( Number[i] > smallest_no){
            smallest_no = smallest_no;
        }
       
    }
     printf("The smallest element is %d", smallest_no);
    return 0;
}