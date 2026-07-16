#include <stdio.h>

int main() {
    int i, j, k;
    int found, frequency = 0;
    int Number[10];

    printf("Enter 10 Numbers : ");
    for(i = 0; i < 10; i++){
        scanf("%d", &Number[i]);
    }

    for(i = 0; i < 10; i++){

        found = 0;

        for(k = 0; k < i; k++){
            if(Number[i] == Number[k]){
                found = 1;
            }
        }
        
        if(found == 0){
            frequency = 0;
            for(j = 0; j < 10; j++){
                if(Number[i] == Number[j]){
                    frequency++;
                }
            }
            printf("Frequency of %d is %d\n", Number[i], frequency);
        }
    }
    return 0;
}