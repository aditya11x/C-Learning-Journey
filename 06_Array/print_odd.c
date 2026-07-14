#include <stdio.h>
int main ()  {
    int i;
    int Numbers[10];
    for(i = 0; i < 10; i++ ){
        scanf("%d", &Numbers[i]);
    }
    printf("-------------\n");
    for(i = 0; i < 10; i++){
        if(Numbers[i] %2 != 0){
            printf("%d\n", Numbers[i]);
        }
        
    }
    return 0;
}