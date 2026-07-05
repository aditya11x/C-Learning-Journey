// Print factors of 2 between 2 to 20

#include <stdio.h>
int main () {
    int a = 2;
    while(a<=20){
    
    while( a%2 == 0 ){
        printf("%d \n", a);
        a++;

    }
    a++ ;
}
    return 0;
}