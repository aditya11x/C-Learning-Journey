#include <stdio.h>

int main() {

    int i, Largest_No = 0, Second_large = 0;
    int Number[10];
    
    for(i = 0; i < 10; i++){
        scanf("%d", &Number[i]);
    }
    for(i = 0; i < 10; i++){
        if(Largest_No < Number[i]){
            Largest_No = Number[i];
        }
    }
    for(i = 0; i < 10; i++){
        if(Number[i] != Largest_No){
            if(Second_large < Number[i] ){
                Second_large = Number[i];
            }
        }
    }
    printf("The second largest number is %d", Second_large);
    return 0;
}