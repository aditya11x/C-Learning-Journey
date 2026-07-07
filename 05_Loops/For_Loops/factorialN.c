// This program multplies all the number from 1 to N

#include <stdio.h>
int main () {
    int multiple = 1, N;
    printf("Enter the Value of N : ");
    scanf("%d", &N);
    for(N; N > 0; N--){
    multiple*=N;

    
}
printf("%d", multiple);

return 0;
}