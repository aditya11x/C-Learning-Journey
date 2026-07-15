#include <stdio.h>

int main() {
    int i, j, k, found;
    int Numbers[10];
    printf("Enter 10 random numbers : ");
    for(i = 0; i < 10; i++){
        scanf("%d", &Numbers[i]);
    }
    printf("Duplicate Numbers are : ");
    

    for(i = 0; i < 10; i++){
     
        for(j = i + 1; j < 10; j++){
            if(Numbers[i] == Numbers[j]){
             found = 0;
                for(k = 0; k < i; k++){
                    
                    if(Numbers[i] == Numbers[k]){
                        found = 1;
                        break;
                    }
                    
                }
            }
        }
        if( found == 0){
            printf("%d\n", Numbers[i]);
        }
    }
    return 0;
}