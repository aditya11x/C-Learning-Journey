#include <stdio.h>
int main() {
    int A, B;
    int space, star;
    for(B = 5, A = 1; B > 0, A <= 9; B--, A = A + 2){
        for(space = 1; space <=B; space++){
            printf(" ");
        }
        for(star = 1; star <= A; star++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}